#include<stdio.h>
#include<conio.h>
#include<windows.h>

#include "levels.h"
#include "functions.h"

int main(){      

	system("color B");
	printf("\n\t-Simple maze game in C - Created by srcemre");
    printf("\n\t-(Use the keyboard keys to select from the menu.)");
	menu();

	while(1){

    	character = getch();
		if(character == 'P' || character == 'p')
    		control();
	
		if(character == 'E' || character == 'e'){
			system("CLS");
			printf("\n\t Exit.");
			break;
		}
    		
	}
	getch();
	return 0;
}
				 					








