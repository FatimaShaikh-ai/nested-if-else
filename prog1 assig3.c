#include <stdio.h>
#include <conio.h>

int main(){
	int math, science, total_per;
	printf("enter you math percentage:\n");
	scanf("%d",&math);
	
	printf("enter your science percentage:\n");
	scanf("%d",&science);
	
	total_per = math+science;
	
	
	if (total_per >=50){
		printf("you are eligible for admission.");
		if (total_per>=80){
			printf("you are qualified for scholarship.");
			
		}else{
			printf("you are not eligble for admission.");
		}
		}else{
			printf("you are not  qualified for scholarship.");
		
	}return 0;
}
