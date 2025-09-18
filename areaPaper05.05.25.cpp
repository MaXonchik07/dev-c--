#include <stdio.h>
#include "malloc.h"
void dfs(int x, int y, int** area, int** direct, int M, int N){
    area[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int tempX = x + direct[i][0];
        int tempY = y + direct[i][1];
        if(tempX >= 0 && tempX < M && tempY >= 0 && tempY < N && area[tempX][tempY] == 0){
        	dfs(tempX, tempY, area, direct, M, N);
    	}
    }
}
int piecesOfPaper(int M, int N, int num){
	int numOfPieces = 0;
	int** area = (int**)malloc(sizeof(int*)*M);
	for(int i = 0; i < M; i++){
		area[i] = (int*)malloc(sizeof(int)*N);
	}
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			area[i][j] = 0;
		}
	}
	for (int i = 0; i < num; i++){
    	int x, y;
        scanf("%i %i", &x, &y);
        area[x][y] = -1; 
    }
	int** direct = (int**)malloc(sizeof(int*)*4);
	for(int i = 0; i < 4; i++){
		direct[i] = (int*)malloc(sizeof(int)*2);
	}
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 2; j++){
			direct[i][j] = 0;
		}
	}
	direct[0][0] = -1;
	direct[1][0] = 1;
	direct[2][1] = -1;
	direct[3][1] = 1;
	for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
        	if(area[i][j] == 0){
            	dfs(i, j, area, direct, M, N);
                numOfPieces++; 
            }
        }
    }
	for(int i = 0; i < M; i++){
		free(area[i]);
	}
	for(int i = 0; i < 4; i++){
		free(direct[i]);
	}
	free(area);
	free(direct);
	return numOfPieces;
}
