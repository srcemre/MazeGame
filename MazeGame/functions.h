
#define player 'o'
#define number_of_move 26

#define default_flag 1

char direction;
char character;
char wall[0];

int counter;   
int k,l,i,j;
int flag;

void init(){
	
	wall[0]=c_wall ;	
	flag=default_flag;
	counter = number_of_move;
	i=start_y;
	j=start_x;

}

void warning(){
	printf("\a\n\n --> !! You hit the wall. !! \n\n");
}

void menu(){
	printf("\n\n\t\tMENU\n\n\tP-PLAY\n\tE-EXIT\n");
}

void display(){
	
	system("CLS");
	system("color B");
	
	//----------------------------	
	printf( "\n\tNumber of moves: %d\n\n", counter-1 );
	for( k = 0; k < 11; k++ ) 
	{
		printf( "   " );
		for( l = 0; l < 11; l++ )
		{
			printf( "%c", str1[ k ][ l ] );
		}
		printf( "\n" );
	}
	printf( "\n ! Press W-A-S-D keys to move.");
	printf( "\n ! Press E to exit. ");
	//----------------------------	
    }
    
void control(){
	
	init();
	level1(player);
	display();
	
	while(flag!=0)
	{
		direction = getch();
		display();

		if( direction == 'A' || direction == 'a'  )
		{	
			if(map_name[i][j-1] != wall[0] && map_name[i][j-1] !=NULL )
			{
				map_name[i][j] = space;
				map_name[i][--j] = player;	
				display();
			}
			else
				warning();
		}
		if( direction == 'D' || direction == 'd'  )
		{	
			if(map_name[i][j+1] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[i][++j] = player;
				display();
			}
			else
				warning();
		}
		if( direction == 'W' || direction == 'w'  )
		{
			if(map_name[i-1][j] != wall[0] )
			{
			map_name[i][j] = space;
			map_name[--i][j] = player;
			display();
			}
			else
				warning();
		}
		if( direction == 'S' || direction == 's'  )
		{
			if(map_name[i+1][j] != wall[0] )
			{
				map_name[i][j] = space;
				map_name[++i][j] = player;
				display();
			}
			else
				warning();
		}	
		if( direction == 'E' || direction == 'e'  )
		{
			flag=0;
			system("CLS");
			printf("\n\t Exit.");
			printf("\n\n\t\tMENU\n\n\tP-PLAY\n\tE-EXIT\n");
		}
		
		counter=counter-1;

		//Finish 	
		if(counter == 0)
		{
			flag=0;
			system("color 0C");
			printf("\n\n\tYOU LOSE! :( \n");
			menu();
		}
		else if(map_name[finish_y][finish_x] == player)
		{
			flag=0;
			system("color 0A");
			printf("\n\n\tYOU WIN! :) \n");
			menu();
		}
		//-------
	}
}
