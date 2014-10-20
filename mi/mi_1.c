#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>;

#define size 3;

int masivs(){
	int i, j;
	int array[3][3];
	
	//for (i = 0; i < size; i++) {
    	//for (j = 0; j < size; j++) {
        	//printf("(%d,%d): ", i+1, j+1);
       	  //scanf("%d", &value);
        //	array[i][j] = array;
    	//}
	//}		
}


int main(){
	
	int choice,exit;
	
		
	exit = 0;
		
	while(exit == 0){
		
		scanf ("%d", &choice);
		switch(choice){
			case 1:
			//	clrscr();
				printf("Masivs piepildits");
				getch();
				system("cls");
				break;
			case 2:
			//	clrscr();
				printf("Sakt speli");
				getch();
				system("cls");
				break;
			case 3:
				exit=1;
				getch();
				break;		
		}
	}	
	getch();
}
