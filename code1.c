/* Name: Wyatt Payne
 * Title: code1
 * Lab: Lab 05
 * Last Modified: 10/13/24
 * Purpose: Generate a sales report of 12 monthly sales
 */
#include <stdio.h>
#include <stdlib.h>

int max(double *ar);
int min(double *ar);

int main(){
	FILE *salesReport;
	FILE *fReport;
	double sales[12];
	char ch[50];
	void monthlyReport(FILE fReport, double sales);
	salesReport = fopen("test.txt", "r");
	printf("Enter sales report file: \n");
	for(int i = 0; i < 12; i++){
		fgets(ch, 25, salesReport);
		sales[i] = atof(ch);
	}
	fclose(salesReport);
	fReport = fopen("Sales_Report.txt", "w");
	fclose(fReport);
}

int max(double *ar){
	double max = 0.00;
	int month;
	for(int i = 0; i < 12; i++){
		if(ar[i] > max){
			max = ar[i];
			month = i;
		}
	}
	return month;
}

int min(double *ar){
	double min = ar[max(ar)];
	int month;
	for(int i = 0; i<12; i++){
		if(ar[i] < min){
			min = ar[i];
			month = i;
		}
	}
	return month;
}
