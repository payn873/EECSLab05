/* Name: Wyatt Payne
 * Title: code1
 * Lab: Lab 05
 * Last Modified: 10/11/24
 * Purpose: Generate a sales report of 12 monthly sales
 */
#include <stdio.h>

int main(){
	printf("Enter sales report file: \n");
	FILE *salesReport = fopen("test.txt", "r");
	char ch;
	char sales[12][20];
	int j = 0;
	for(int i = 0; i<12; i++){
		while((ch = fgetc(salesReport)) != EOF){
			sales[i][j] = ch;
			j++;
		}
		j = 0;
	}
	int test = 0;
	for(int i = 0; i < 20; i++){
		if(sales[i][j] != "."){
			printf("%d---", sales[i][1]-48);
			test = (test*10) + (sales[i][1] - 48);
		}
		else{
			break;
		}
	}
	printf("%d\n", test);
	fclose(salesReport);
	return 0;
}
