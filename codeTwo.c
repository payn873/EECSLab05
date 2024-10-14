/* Name: Wyatt Payne
 * Title: code2
 * Lab: Lab 06
 * Last Modified: 10/13/24
 * Purpose: Add, Multiply, and Transpose pre-defined 5x5 matricies
 */
#include <stdio.h>

#define SIZE 5

int multiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE]);
int addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE]);
int transposeMatrix(int m[SIZE][SIZE]);
int printMatirx(int m[SIZE][SIZE]);

int main() {
	int madd[SIZE][SIZE];
	int m1[SIZE][SIZE] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	int m2[SIZE][SIZE] = {
		{25,24,23,22,21},
		{20,19,18,17,16},
		{15,14,13,12,11},
		{10,9,8,7,6,},
		{5,4,3,2,1}
	};
	addMatrices(m1, m2);
	multiplyMatrices(m1, m2);
	transposeMatrix(m1);
}

int printMatrix(int m[SIZE][SIZE]){
	for(int i = 0; i < SIZE; i++){
		printf("[%d %d %d %d %d]\n", m[i][0], m[i][1], m[i][2], m[i][3], m[i][4]);
	}
}

int addMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE]){
	int m3 [SIZE][SIZE];
	for(int i = 0; i < SIZE; i++){
		for(int k = 0; k < SIZE; k++){
			m3[i][k] = m1[i][k] + m2[i][k];
		}
	}
	printMatrix(m3);
	return 0;
}

int multiplyMatrices(int m1[SIZE][SIZE], int m2[SIZE][SIZE]){
	int m3[SIZE][SIZE];
	for(int i = 0; i < SIZE; i++){
		for (int k = 0; k < SIZE; k++){
			m3[i][k] = m1[i][0]*m2[0][k] + m1[i][1]*m2[1][k] + m1[i][3]*m2[3][k] + m1[i][4]*m2[4][k];
		}
	}
	printMatrix(m3);
	return 0;
}

int transposeMatrix(int m[SIZE][SIZE]){
	int mT[SIZE][SIZE];
	for(int i = 0; i < SIZE; i++){
		for(int k = 0; k < SIZE; k++){
			mT[i][k] = m[k][i];
		}
	}
	printMatrix(mT);
	return 0;
}
