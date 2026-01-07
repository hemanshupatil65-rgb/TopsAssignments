#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float divi(int a, int b) {
    return (float)a / b;
}

int main() {

    int ch, n1, n2;
    char ans;

    do {

        printf("\n---- MENU ----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        if(ch >= 1 && ch <= 4) {

            printf("Enter first number: ");
            scanf("%d", &n1);

            printf("Enter second number: ");
            scanf("%d", &n2);

            if(ch == 1) {
                printf("Addition = %d\n", add(n1, n2));
            }
            else if(ch == 2) {
                printf("Subtraction = %d\n", sub(n1, n2));
            }
            else if(ch == 3) {
                printf("Multiplication = %d\n", mul(n1, n2));
            }
            else if(ch == 4) {
                if(n2 == 0) {
                    printf("Division by zero not possible.\n");
                } else {
                    printf("Division = %.2f\n", divi(n1, n2));
                }
            }

        } 
		else {
            printf("Invalid choice!\n");
        }
        do{

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &ans);
        
         if(ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N') {
                printf("Invalid input! Please enter y or n.\n");
            }

    } while(ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');

    } while(ans == 'y' || ans == 'Y');

    return 0;	
}
