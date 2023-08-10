#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(const char* num1, const char* num2) {
    int result = 0;
    while (*num1 != '\0' && *num2 != '\0') {
        if (!isdigit(*num1) || !isdigit(*num2)) {
            printf("Error\n");
            exit(98);
        }
        result = result * 10 + (*num1 - '0');
        result = result * 10 + (*num2 - '0');
        num1++;
        num2++;
    }
    return result;
}

int main(int argc, char* argv[]) {
    // Check the number of arguments
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    const char* num1 = argv[1];
    const char* num2 = argv[2];

    // Check if the numbers are composed of digits
    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }
    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }

    // Multiply the numbers
    int product = multiply_numbers(num1, num2);
    printf("%d\n", product);

    return 0;
}
