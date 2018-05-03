


#include "../../sdk/dexsdk.h"
#include "../../sdk/time.h"



void print_board(int **board);





#define X_coord 85
#define Y_coord 35

int main(){
	
	set_graphics(VGA_320X200X256);
  	//set_coordinates(X_coord, Y_coord);

	//print_board(X_coord,Y_coord);
	write_text("2048",135,5,WHITE,0);

	set_graphics(VGA_TEXT80X25X16);
	//clrscr();
}



void print_board(int x, int y) {
	
	int i,j,a,b;
	a=x;
	b=y;
	char str[15];

	write_text("2048",135,5,WHITE,0);

	write_text("Up-W",5,35,WHITE,0);
	write_text("Dn-S",5,45,WHITE,0);
	write_text("Lf-A",5,55,WHITE,0);
	write_text("Rt-D",5,65,WHITE,0);
	
	write_text("Flip-L",5,75,WHITE,0);
	write_text("Exit-X",5,85,WHITE,0);
	write_text("Reset-R",5,95,WHITE,0);

}