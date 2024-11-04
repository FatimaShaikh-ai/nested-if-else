#include<stdio.h>
#include<conio.h>

void check_withdrawal(double balance, double withdrawal_amount) {
    char special_permit;

    
    if (balance >= withdrawal_amount) {
        
        if (withdrawal_amount > 10000) {
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &special_permit);

            
            if (special_permit == 'Y' || special_permit == 'y') {
                printf("Withdrawal Approved\n");
            } else {
                printf("Special permit required for this amount\n");
            }
        } else {
            printf("Withdrawal Approved\n");  
        }
    } else {
        printf("Insufficient Funds\n");
    }
}

int main() {
    double balance, withdrawal_amount;

    printf("Enter account balance: ");
    scanf("%lf", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%lf", &withdrawal_amount);

    check_withdrawal(balance, withdrawal_amount);

    return 0;
}


