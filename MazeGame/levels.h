
#define map_name str1

#define c_wall 178
#define space 32
#define finish 175

#define start_y 1
#define start_x 0

#define finish_y 8
#define finish_x 9

char str1[11][11] = {"          ","          ","          ","          ","          "};

void level1(char player){
	
	str1[0][0]=c_wall; str1[0][1]=c_wall;str1[0][2]=c_wall;str1[0][3]=c_wall;str1[0][4]=c_wall;str1[0][5]=c_wall;str1[0][6]=c_wall;str1[0][7]=c_wall;str1[0][8]=c_wall;str1[0][9]=c_wall;
	str1[1][0]=player; str1[1][1]=space ;str1[1][2]=c_wall;str1[1][3]=space ;str1[1][4]=space ;str1[1][5]=space ;str1[1][6]=space ;str1[1][7]=c_wall;str1[1][8]=space ;str1[1][9]=c_wall;
	str1[2][0]=c_wall; str1[2][1]=space ;str1[2][2]=c_wall;str1[2][3]=space ;str1[2][4]=c_wall;str1[2][5]=c_wall;str1[2][6]=space ;str1[2][7]=space ;str1[2][8]=space ;str1[2][9]=c_wall;
	str1[3][0]=c_wall; str1[3][1]=space ;str1[3][2]=c_wall;str1[3][3]=space ;str1[3][4]=space ;str1[3][5]=space ;str1[3][6]=c_wall;str1[3][7]=space ;str1[3][8]=c_wall;str1[3][9]=c_wall;
	str1[4][0]=c_wall; str1[4][1]=space ;str1[4][2]=space ;str1[4][3]=space ;str1[4][4]=c_wall;str1[4][5]=space ;str1[4][6]=c_wall;str1[4][7]=space ;str1[4][8]=space ;str1[4][9]=c_wall;
	str1[5][0]=c_wall; str1[5][1]=c_wall;str1[5][2]=c_wall;str1[5][3]=space ;str1[5][4]=c_wall;str1[5][5]=c_wall;str1[5][6]=c_wall;str1[5][7]=c_wall;str1[5][8]=space ;str1[5][9]=c_wall;
	str1[6][0]=c_wall; str1[6][1]=space ;str1[6][2]=space ;str1[6][3]=space ;str1[6][4]=space ;str1[6][5]=space ;str1[6][6]=space ;str1[6][7]=c_wall;str1[6][8]=space ;str1[6][9]=c_wall;
	str1[7][0]=c_wall; str1[7][1]=space ;str1[7][2]=c_wall;str1[7][3]=c_wall;str1[7][4]=c_wall;str1[7][5]=space ;str1[7][6]=c_wall;str1[7][7]=c_wall;str1[7][8]=space ;str1[7][9]=c_wall;
	str1[8][0]=c_wall; str1[8][1]=space ;str1[8][2]=space ;str1[8][3]=space ;str1[8][4]=c_wall;str1[8][5]=space ;str1[8][6]=space ;str1[8][7]=c_wall;str1[8][8]=space ;str1[8][9]=finish;
	str1[9][0]=c_wall; str1[9][1]=c_wall;str1[9][2]=c_wall;str1[9][3]=c_wall;str1[9][4]=c_wall;str1[9][5]=c_wall;str1[9][6]=c_wall;str1[9][7]=c_wall;str1[9][8]=c_wall;str1[9][9]=c_wall;
	
}
