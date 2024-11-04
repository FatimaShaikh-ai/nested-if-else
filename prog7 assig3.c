#include<stdio.h>
#include<conio.h>

int main() {
    float purchaseAmount, finalAmount;
    char isMember;

    
    printf("Enter the purchase amount: ");
    scanf("%f", &purchaseAmount);

    
    if (purchaseAmount > 2000) {
        
        printf("Are you a member? (y/n): ");
        scanf(" %c", &isMember);  

        
        if (isMember == 'y' || isMember == 'Y') {
            
            finalAmount = purchaseAmount * 0.80;
        } else {
            
            finalAmount = purchaseAmount * 0.90;
        }
    } else {
        
        finalAmount = purchaseAmount;
    }

    
    printf("Final amount after discount: %.2f\n", finalAmount);

    return 0;
}

