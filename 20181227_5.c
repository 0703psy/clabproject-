#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int  scr[5][5] = {
		{5, 4, 6, 5},
		{3, 6, 9, 3},
		{4, 8, 2, 7},
		{3, 8, 9, 7}
	};
	/*
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &scr[i][j]);
		}
	}
	*/

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scr[i][4] += scr[i][j];		//학생의 각 총점
			scr[4][i] += scr[j][i];		//과목별 총점 
		}
	}
	for (int i = 0; i < 4; i++) {
		scr[4][4]+= scr[i][4];

	}
	 

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", scr[i][j]);
		}
		printf("\n");
	}
	
	
}