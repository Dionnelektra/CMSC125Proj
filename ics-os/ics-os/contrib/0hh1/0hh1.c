#include "../../sdk/dexsdk.h"
#include "../../sdk/time.h"

void print4x4_board(int **board);
void print6x6_board();

#define RED 4
#define BLUE 1
#define GRAY 56
#define LARGE_FONT 1
#define SMALL_FONT 0

//buttons
#define fourxfour '4'
#define sixxsix '6'
#define how2play '1'
#define quit_game '2'
#define toMenu 'q'
#define yes 'y'
#define col1x 129
#define col2x 154
#define col3x 179
#define col4x 204
#define row1y 39
#define row2y 64
#define row3y 89
#define row4y 114
#define col1 129
#define col2 149
#define col3 169
#define col4 189
#define col5 209
#define col6 229
#define row1 39
#define row2 59
#define row3 79
#define row4 99
#define row5 119
#define row6 139

int main() {
	int choice, choice2;	
	int x, y;
	int board[4][4];
		
	set_graphics(VGA_320X200X256);	
	do {
		erase(1, 1, 400, 220);
		menu(); //prints menu
		
		choice = (char)getch();
		erase(1, 1, 400, 220);
		
		for(int i=0; i<4; i++) {
			for(int j=0; j<4; j++) {
				board[i][j] = 0;
			}
		}
		if(choice == fourxfour) {
			x = 0;
			print4x4_board(&board);
			y = 0;
			board[x][y] = 1; // 1 - currently highlighted tile
			drawboxhighlight4x4(col1x,row1y);
			do {
				choice = (char)getch();
				if(choice == toMenu) {
					write_text("Do you want to exit? y/n ",60,160,WHITE,0); 
					choice2=(char)getch();
					erase(60,160,220,40);
				}
				else if((choice == 'w' || choice == 'W') && x != 0) {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 0;
					x -= 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row1y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row1y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row1y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row1y);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row2y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row2y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row2y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row2y);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row3y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row3y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row3y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row3y);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight4x4(col1x,row4y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row4y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row4y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row4y);
						}
					}
				}
				else if((choice == 'a' || choice == 'A') && y != 0) {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 0;
					y -= 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row1y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row1y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row1y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row1y);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row2y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row2y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row2y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row2y);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row3y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row3y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row3y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row3y);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight4x4(col1x,row4y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row4y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row4y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row4y);
						}
					}
				}
				else if((choice == 's' || choice == 'S') && x != 3) {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 0;
					x += 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row1y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row1y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row1y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row1y);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row2y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row2y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row2y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row2y);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row3y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row3y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row3y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row3y);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight4x4(col1x,row4y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row4y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row4y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row4y);
						}
					}
				}
				else if((choice == 'd' || choice == 'D') && y != 3) {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 0;
					y += 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row1y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row1y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row1y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row1y);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row2y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row2y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row2y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row2y);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight4x4(col1x,row3y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row3y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row3y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row3y);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight4x4(col1x,row4y);
						}
						else if(y==1) {
							drawboxhighlight4x4(col2x,row4y);
						}
						else if(y==2) {
							drawboxhighlight4x4(col3x,row4y);
						}
						else if(y==3) {
							drawboxhighlight4x4(col4x,row4y);
						}
					}
				}
				else if(choice == 'r' || choice == 'R') {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 3;
					drawBox4x4color(x,y,board[x][y]);	
				}
				else if(choice == 'b' || choice == 'B') {
					erase(120,30,120,120);
					print4x4_board(&board);
					board[x][y] = 4;
					drawBox4x4color(x,y,board[x][y]);	
				}
			}while(choice2 != yes);
			choice2=0;
		}
		else if(choice == sixxsix) {
			print6x6_board();
			x = 0;
			y = 0;
			board[x][y] = 1; // 1 - currently highlighted tile
			drawboxhighlight6x6(col1,row1);
			do {
				choice = (char)getch();
				if(choice == toMenu) {
					write_text("Do you want to exit? y/n ",60,160,WHITE,0); 
					choice2=(char)getch();
					erase(60,160,220,40);
				}
				else if((choice == 'w' || choice == 'W') && x != 0) {
					erase(120,30,140,140);
					print6x6_board();
					board[x][y] = 0;
					x -= 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight6x6(col1,row1);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row1);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row1);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row1);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row1);
						}
						else {
							drawboxhighlight6x6(col6,row1);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight6x6(col1,row2);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row2);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row2);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row2);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row2);
						}
						else {
							drawboxhighlight6x6(col6,row2);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight6x6(col1,row3);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row3);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row3);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row3);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row3);
						}
						else {
							drawboxhighlight6x6(col6,row3);
						}
					}
					else if(x==3) {
						if(y==0) {
							drawboxhighlight6x6(col1,row4);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row4);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row4);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row4);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row4);
						}
						else {
							drawboxhighlight6x6(col6,row4);
						}
					}
					else if(x==4) {
						if(y==0) {
							drawboxhighlight6x6(col1,row5);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row5);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row5);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row5);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row5);
						}
						else {
							drawboxhighlight6x6(col6,row5);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight6x6(col1,row6);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row6);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row6);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row6);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row6);
						}
						else {
							drawboxhighlight6x6(col6,row6);
						}
					}
				}
				else if((choice == 'a' || choice == 'A') && y != 0) {
					erase(120,30,140,140);
					print6x6_board();
					board[x][y] = 0;
					y -= 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight6x6(col1,row1);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row1);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row1);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row1);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row1);
						}
						else {
							drawboxhighlight6x6(col6,row1);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight6x6(col1,row2);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row2);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row2);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row2);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row2);
						}
						else {
							drawboxhighlight6x6(col6,row2);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight6x6(col1,row3);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row3);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row3);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row3);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row3);
						}
						else {
							drawboxhighlight6x6(col6,row3);
						}
					}
					else if(x==3) {
						if(y==0) {
							drawboxhighlight6x6(col1,row4);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row4);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row4);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row4);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row4);
						}
						else {
							drawboxhighlight6x6(col6,row4);
						}
					}
					else if(x==4) {
						if(y==0) {
							drawboxhighlight6x6(col1,row5);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row5);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row5);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row5);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row5);
						}
						else {
							drawboxhighlight6x6(col6,row5);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight6x6(col1,row6);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row6);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row6);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row6);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row6);
						}
						else {
							drawboxhighlight6x6(col6,row6);
						}
					}
				}
				else if((choice == 's' || choice == 'S') && x != 6) {
					erase(120,30,140,140);
					print6x6_board();
					board[x][y] = 0;
					x += 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight6x6(col1,row1);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row1);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row1);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row1);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row1);
						}
						else {
							drawboxhighlight6x6(col6,row1);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight6x6(col1,row2);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row2);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row2);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row2);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row2);
						}
						else {
							drawboxhighlight6x6(col6,row2);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight6x6(col1,row3);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row3);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row3);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row3);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row3);
						}
						else {
							drawboxhighlight6x6(col6,row3);
						}
					}
					else if(x==3) {
						if(y==0) {
							drawboxhighlight6x6(col1,row4);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row4);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row4);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row4);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row4);
						}
						else {
							drawboxhighlight6x6(col6,row4);
						}
					}
					else if(x==4) {
						if(y==0) {
							drawboxhighlight6x6(col1,row5);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row5);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row5);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row5);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row5);
						}
						else {
							drawboxhighlight6x6(col6,row5);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight6x6(col1,row6);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row6);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row6);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row6);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row6);
						}
						else {
							drawboxhighlight6x6(col6,row6);
						}
					}
				}
				else if((choice == 'd' || choice == 'D') && y != 6) {
					erase(120,30,140,140);
					print6x6_board();
					board[x][y] = 0;
					y += 1;
					board[x][y] = 1;
					if(x==0) {
						if(y==0) {
							drawboxhighlight6x6(col1,row1);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row1);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row1);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row1);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row1);
						}
						else {
							drawboxhighlight6x6(col6,row1);
						}
					}
					else if(x==1) {
						if(y==0) {
							drawboxhighlight6x6(col1,row2);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row2);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row2);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row2);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row2);
						}
						else {
							drawboxhighlight6x6(col6,row2);
						}
					}
					else if(x==2) {
						if(y==0) {
							drawboxhighlight6x6(col1,row3);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row3);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row3);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row3);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row3);
						}
						else {
							drawboxhighlight6x6(col6,row3);
						}
					}
					else if(x==3) {
						if(y==0) {
							drawboxhighlight6x6(col1,row4);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row4);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row4);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row4);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row4);
						}
						else {
							drawboxhighlight6x6(col6,row4);
						}
					}
					else if(x==4) {
						if(y==0) {
							drawboxhighlight6x6(col1,row5);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row5);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row5);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row5);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row5);
						}
						else {
							drawboxhighlight6x6(col6,row5);
						}
					}
					else {
						if(y==0) {
							drawboxhighlight6x6(col1,row6);
						}
						else if(y==1) {
							drawboxhighlight6x6(col2,row6);
						}
						else if(y==2) {
							drawboxhighlight6x6(col3,row6);
						}
						else if(y==3) {
							drawboxhighlight6x6(col4,row6);
						}
						else if(y==4) {
							drawboxhighlight6x6(col5,row6);
						}
						else {
							drawboxhighlight6x6(col6,row6);
						}
					}
				}
			}while(choice2 != yes);
			choice2=0;
		}
		else if(choice == how2play) {
			printHow2Play();
			do {
				choice = (char)getch();
				if(choice == toMenu) {
					write_text("Do you want to exit? y/n ",60 , 160, WHITE, 0); 
					choice2 = (char)getch();
					erase(60,160,220,40);				
				}
			}
			while(choice != yes);
			choice2=0;
		}
	} 
	while(choice != quit_game);

	set_graphics(VGA_TEXT80X25X16);
	clrscr();
}

menu() {
	//game title
	write_text("0hh1", 150, 50, WHITE, 1);

	//dimensions
	write_text("4 - 4 x 4", 40 , 150, RED, 0); 
	write_text("6 - 6 x 6", 200, 150, BLUE, 0);

	//page for instructions
	write_text("1 - Instructions", 40, 170, GRAY, 0);
	write_text("2 - Quit", 200, 170, GRAY, 0);
	
}

void erase(int x, int y, int w, int h) { //covers an area with a black rectangle that gives the illusion that the contents in the screen are erased
	int i,j;

   	for (i=y;i<=(y+h);i++) {
   		for (j=x;j<=(x+w);j++) {
   			write_pixel(j,i,100);
		}
	}	
}

void printControls() { //prints controls
	write_text("Up - W", 5, 35, WHITE, 0);
	write_text("Lf - A", 5, 45, WHITE, 0);
	write_text("Rt - D", 5, 65, WHITE, 0);
	
	write_text("Dn - S", 5, 55, WHITE, 0);
	write_text("Red - R", 5, 85, WHITE, 0);
	write_text("Blue - B", 5, 95, WHITE, 0);
	write_text("Blank - G", 5, 105, WHITE, 0);

	write_text("Quit - Q", 5, 125, WHITE, 0);
}

void printHow2Play() {
	//header
	write_text("How to Play", 100, 10, WHITE, 0);

	//set of instructions
	write_text("No three consecutive tiles should", 5, 30, WHITE, 0); 
	write_text("have the same color", 5, 40, WHITE, 0);
	write_text("Columns and rows should not", 5, 60, WHITE, 0);
	write_text("have the same pattern", 5, 70, WHITE, 0);
	write_text("The number of red tiles should", 5, 90, WHITE, 0);
	write_text("be equal to the number of blue", 5, 100, WHITE, 0);
	write_text("tiles in each row and column", 5, 110, WHITE, 0);
	
	//back to menu
	write_text("Back to Menu - Q", 5, 150, WHITE, 0);
}

void print4x4_board(int **board) { //prints 4x4 board
	//header	
	write_text("4 x 4", 150, 10, WHITE, 0);
	printControls();
	drawBoard4x4(&board);
}

void drawBox4x4(int rowCount, int colCount/*, int colorChecker*/){
	for(int i=0; i<20; i++) {
		for(int j=0; j<20; j++) {
			/*if(colorChecker == 3) {
					write_pixel(rowCount+i,colCount+j,RED);
			}
			else if(colorChecker == 4) {
				write_pixel(rowCount+i,colCount+j,BLUE);	
			}
			else {
			*/	write_pixel(rowCount+i,colCount+j,GRAY);
			//}
		}
	}
}

void drawBox4x4color(int x, int y, int colorChecker){
	int a,b;
	if(x==0 || x==4 || x==8 || x==12) {
		a=col1x;
		if(y==0 || y==4 || y==8 || y==12) {
			b=row1y;
		}
		else if(y==1 || y==5 || y==9 || y==13) {
			b=row2y;
		}
		else if(y==2 || y==6 || y==10 || y==14) {
			b=row3y;
		}
		else {
			b=row4y;
		}
	}
	else if(x==1 || x==5 || x==9 || x==13) {
		a=col2x;
		if(y==0 || y==4 || y==8 || y==12) {
			b=row1y;
		}
		else if(y==1 || y==5 || y==9 || y==13) {
			b=row2y;
		}
		else if(y==2 || y==6 || y==10 || y==14) {
			b=row3y;
		}
		else {
			b=row4y;
		}
	}
	else if(x==2 || x==6 || x==10 || x==14) {
		a=col3x;
		if(y==0 || y==4 || y==8 || y==12) {
			b=row1y;
		}
		else if(y==1 || y==5 || y==9 || y==13) {
			b=row2y;
		}
		else if(y==2 || y==6 || y==10 || y==14) {
			b=row3y;
		}
		else {
			b=row4y;
		}
	}
	else {
		a=col4x;
		if(y==0 || y==4 || y==8 || y==12) {
			b=row1y;
		}
		else if(y==1 || y==5 || y==9 || y==13) {
			b=row2y;
		}
		else if(y==2 || y==6 || y==10 || y==14) {
			b=row3y;
		}
		else {
			b=row4y;
		}
	}
	drawboxhighlight4x4(a,b);
	for(int i=0; i<20; i++) {
		for(int j=0; j<20; j++) {
			if (colorChecker == 3) {
				write_pixel(a+1+i,b+1+j,RED);
			}
			else if(colorChecker == 4) {
				write_pixel(a+1+i,b+1+j,BLUE);	
			}
			else {
				write_pixel(a+1+i,b+1+j,GRAY);
			}
		}
	}
}

void drawBoard4x4(int **board){
	//drawBox(130,40);
	int a=130;
	int b=40;
	int colorChecker;
	for(int i=0; i<100; i+=25){
		for(int j=0; j<100; j+=25){
			drawBox4x4(a+i,b+j/*,board[i/25][j/25]*/);
		}
	}
}

void drawboxhighlight4x4(int a, int b) {
	for(int i=0; i<22; i+=1) {
		for(int j=0; j<=21; j+=21) {
			write_pixel(a+i,b+j,WHITE);
		}
	}
	for(int i=0; i<22; i+=1) {
		for(int j=0; j<=21; j+=21) {
			write_pixel(a+j,b+i,WHITE);
		}
	}
}

void print6x6_board() {
	//header
	write_text("6 x 6", 150, 10, WHITE, 0);
	printControls();
	drawBoard6x6();
}

void drawBox6x6(int rowCount, int colCount){
	for(int i=0; i<15; i++) {
		for(int j=0; j<15; j++) {
			write_pixel(rowCount+i,colCount+j,GRAY);
		}
	}
}

void drawBoard6x6(){
	//drawBox(130,40);
	int a=130;
	int b=40;
	for(int i=0; i<120; i+=20){
		for(int j=0; j<120; j+=20){
			drawBox6x6(a+i,b+j);
		}
	}
}

void drawboxhighlight6x6(int a, int b) {
	for(int i=0; i<17; i+=1) {
		for(int j=0; j<=16; j+=16) {
			write_pixel(a+i,b+j,WHITE);
		}
	}
	for(int i=0; i<17; i+=1) {
		for(int j=0; j<=16; j+=16) {
			write_pixel(a+j,b+i,WHITE);
		}
	}
}
