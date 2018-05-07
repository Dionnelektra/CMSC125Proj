#include "../../sdk/dexsdk.h"
#include "../../sdk/time.h"

void print_board(int **board);
void erase();
void print_inst();
void print_board();

#define start '1'
#define inst '2'
#define quit '3'
#define yes 'y'
#define no 'n'
#define toMenu 'q'


int main(){

	
	char keypress;


	set_graphics(VGA_320X200X256);

	do {
		erase(1, 1, 400, 220);
		title(); //prints menu

		keypress = (char)getch();
		erase(1, 1, 400, 220);

		if(keypress==start){
			//print board
			print_inst();

		}
		else if(keypress==inst){
			//print instructions
			do {
				print_inst();

			
				keypress = (char)getch();
				if(keypress == toMenu){
					erase(60,160,220,40);
				}

			}while(keypress != toMenu);
						
			
		}

	}while(keypress != quit);	


	set_graphics(VGA_TEXT80X25X16);
	clrscr();
}



title() {

	write_text("2048",160,50,WHITE,1);

	write_text("1 - Start Game", 40, 120, WHITE, 0);
	write_text("2 - Instructions", 40, 150, WHITE, 0);
	write_text("3 - Quit", 40, 170, WHITE, 0);


}

void erase(int x, int y, int w, int h){
	int i,j;

	for(i=y;i<=(y+h);i++){
		for(j=x;j<=(x+w);j++){
			write_pixel(j,i,100);
		}
	}
}

void print_inst(){
	write_text("Instructions",130,20,WHITE,1);

	write_text("Use the keys to move the tiles.",30,60,WHITE,0);
	write_text("When two tiles with the same ",30,80,WHITE,0);
	write_text("number touch,they merge",30,100,WHITE,0);
	write_text("into one!",30,120,WHITE,0);
	write_text("Go and reach 2048!",30,140,WHITE,0);

	write_text(" Q - Back to Menu",5,180,WHITE,0);
}