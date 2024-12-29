#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b == 0) {
        printf("Wrong input: division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main() {
    int ch;
    float ans;
    float a, b;

    while (1) { // Infinite loop, will break when user chooses to exit
        printf("\nYour choice:\n");
        printf("1: Add\n");
        printf("2: Subtract\n");
        printf("3: Multiply\n");
        printf("4: Divide\n");
        printf("5: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 5) {
            printf("Thanks for using the calculator. Goodbye!\n");
            break; // Exit the loop
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (ch) {
            case 1:
                ans = add(a, b);
                printf("The result is: %f\n", ans);
                break;
            case 2:
                ans = sub(a, b);
                printf("The result is: %f\n", ans);
                break;
            case 3:
                ans = multiply(a, b);
                printf("The result is: %f\n", ans);
                break;
            case 4:
                ans = division(a, b);
                if (b != 0) {
                    printf("The result is: %f\n", ans);
                }
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
