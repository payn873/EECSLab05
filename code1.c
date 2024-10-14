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
double avg(double *ar, int start, int end);

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
	fprintf(fReport, "Monthly Sales Report for 2024\nMonth     Sales\n");
	fprintf(fReport, "January   %10f\nFebruary  %10f\nMarch     %10f\nApril     %10f\nMay       %10f\nJune      %10f\nJuly      %10f\nAugust    %10f\nSeptember %10f\nOctober   %10f\nNovember  %10f\nDecember  %10f\n", sales[0], sales[1], sales[2], sales[3], sales[4], sales[5], sales[6], sales[7], sales[8], sales[9], sales[10], sales[11]);
	fprintf(fReport, "\n\nSales Summary Report\nMinimum Sales:   ");
	if(min(sales) == 0){
		fprintf(fReport, "%f  (Janurary)\n", sales[0]);
	}else if(min(sales) == 1){
		fprintf(fReport, "%f  (February)\n", sales[1]);
	}else if(min(sales) == 2){
		fprintf(fReport, "%f  (March)\n", sales[2]);
	}else if(min(sales) == 3){
		fprintf(fReport, "%f  (April)\n", sales[3]);
	}else if(min(sales) == 4){
		fprintf(fReport, "%f  (May)\n", sales[4]);
	}else if(min(sales) == 5){
		fprintf(fReport, "%f  (June)\n", sales[5]);
	}else if(min(sales) == 6){
		fprintf(fReport, "%f  (July)\n", sales[6]);
	}else if(min(sales) == 7){
		fprintf(fReport, "%f  (August)\n", sales[7]);
	}else if(min(sales) == 8){
		fprintf(fReport, "%f  (September)\n", sales[8]);
	}else if(min(sales) == 9){
		fprintf(fReport, "%f  (October)\n", sales[9]);
	}else if(min(sales) == 10){
		fprintf(fReport, "%f  (November)\n", sales[10]);
	}else if(min(sales) == 11){
		fprintf(fReport, "%f  (December)\n", sales[11]);
	}
	fprintf(fReport, "Maximum Sales   ");
	if(max(sales) == 0){
                fprintf(fReport, "%f  (Janurary)\n", sales[0]);
        }else if(max(sales) == 1){
                fprintf(fReport, "%f  (February)\n", sales[1]);
        }else if(max(sales) == 2){
                fprintf(fReport, "%f  (March)\n", sales[2]);
        }else if(max(sales) == 3){
                fprintf(fReport, "%f  (April)\n", sales[3]);
        }else if(max(sales) == 4){
                fprintf(fReport, "%f  (May)\n", sales[4]);
        }else if(max(sales) == 5){
                fprintf(fReport, "%f  (June)\n", sales[5]);
        }else if(max(sales) == 6){
                fprintf(fReport, "%f  (July)\n", sales[6]);
        }else if(max(sales) == 7){
                fprintf(fReport, "%f  (August)\n", sales[7]);
        }else if(max(sales) == 8){
                fprintf(fReport, "%f  (September)\n", sales[8]);
        }else if(max(sales) == 9){
                fprintf(fReport, "%f  (October)\n", sales[9]);
        }else if(max(sales) == 10){
                fprintf(fReport, "%f  (November)\n", sales[10]);
        }else if(max(sales) == 11){
                fprintf(fReport, "%f  (December)\n", sales[11]);
        }
	fprintf(fReport, "Average Sales:   %f\n", avg(sales, 0, 11));
	fprintf(fReport, "\nSix-Month Moving Average Report:\n\n");
	fprintf(fReport, "January-June        %f\nFebruary-July       %f\nMarch-August        %f\nApril-September     %f\nMay-October         %f\nJune-November       %f\nJuly-December       %f\n\n", avg(sales,0,5), avg(sales,1,6), avg(sales,2,7), avg(sales,3,8), avg(sales,4,9), avg(sales,5,10), avg(sales,6,11));
	fprintf(fReport, "Sales Report (Highest to Lowest):\n\nMonth          Sales\n");
	for(int i = 0; i<12; i++){
		if(max(sales) == 0){
                	fprintf(fReport, "January        $%f\n", sales[0]);
			sales[0] = 0.00;
        	}else if(max(sales) == 1){
                	fprintf(fReport, "February       $%f\n", sales[1]);
			sales[1] = 0.00;
        	}else if(max(sales) == 2){
                	fprintf(fReport, "March          $%f\n", sales[2]);
			sales[2] = 0.00;
        	}else if(max(sales) == 3){
                	fprintf(fReport, "April          $%f\n", sales[3]);
			sales[3] = 0.00;
        	}else if(max(sales) == 4){
                	fprintf(fReport, "May            $%f\n", sales[4]);
			sales[4] = 0.00;
        	}else if(max(sales) == 5){
                	fprintf(fReport, "June           $%f\n", sales[5]);
			sales[5] = 0.00;
        	}else if(max(sales) == 6){
                	fprintf(fReport, "July           $%f\n", sales[6]);
			sales[6] = 0.00;
        	}else if(max(sales) == 7){
                	fprintf(fReport, "August         $%f\n", sales[7]);
			sales[7] = 0.00;
        	}else if(max(sales) == 8){
                	fprintf(fReport, "September      $%f\n", sales[8]);
			sales[8] = 0.00;
        	}else if(max(sales) == 9){
                	fprintf(fReport, "October        $%f\n", sales[9]);
			sales[9] = 0.00 ;
        	}else if(max(sales) == 10){
                	fprintf(fReport, "November       $%f\n", sales[10]);
			sales[10] = 0.00 ;
        	}else if(max(sales) == 11){
                	fprintf(fReport, "December       $%f\n", sales[11]);
			sales[11] = 0.00;
        	}
	}
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

double avg(double *ar, int start, int end){
	double sum = 0.00;
	double amount = 0.00;
	for(int i = start; i < end+1; i++){
		sum += ar[i];
		amount += 1.00;
	}
	return sum/amount;
}
