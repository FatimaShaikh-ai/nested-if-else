#include <stdio.h>
#include <conio.h>

int main(){
	int unit;
	float bills;
	printf("enter consumed units:");
	scanf("%d",&unit);
	
	if (unit<=100){
		bills=0;
		printf("no charge : %f",bills);
		
	}else if (unit<=200){
		bills =(unit)*5;
		printf("5 rupees per unit.%f",bills);
	}else if (unit<=300){
		bills=(unit)*8;
		printf("8 rupees per unit %f",bills);
		
	}
	else{
	bills=(unit)*10;
	printf("10 rupees per unit %f",bills);
    }return 0;

}
