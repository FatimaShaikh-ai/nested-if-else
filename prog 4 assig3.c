#include<stdio.h>
#include<conio.h>

int main(){
	int salary;
	float tax;
	
	printf("Enter you salary:");
	scanf("%d", &salary);
	
	if (salary<=250000){
		tax=0;
		printf("no tax %f:",tax);
	}else{
		if(salary<=500000){
			tax=salary*0.05;
			printf("tax is  %f:",tax);
		}else{
			if(salary<=1000000){
				tax=salary*0.10;
				printf("tax is %f:",tax);
			}else{
				tax=salary*0.15;
			}
		}
	}printf("The income tax for an income of %d is: %.2f\n", salary, tax);

    return 0;
}

