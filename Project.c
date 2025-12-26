
#include <stdio.h>
#include <stdlib.h>

void showMenu() {
    printf("\n--- POWER CALCULATOR ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("Select an option (1-5): ");
}

int main() {
    int choice;
    double a, b;

    while (1) {
        showMenu();
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting... Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result: %.2lf\n", a + b); break;
            case 2: printf("Result: %.2lf\n", a - b); break;
            case 3: printf("Result: %.2lf\n", a * b); break;
            case 4: 
                if (b != 0) printf("Result: %.2lf\n", a / b);
                else printf("Error: Cannot divide by zero!\n");
                break;
            default:
                printf("Invalid selection. Please try again.\n");
        }
    }
    return 0;
}