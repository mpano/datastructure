#include <stdio.h>

void decimal_to_binary(int decimal);

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary equivalent: ");
    decimal_to_binary(decimal);
    printf("\n");
    return 0;
}

void decimal_to_binary(int decimal) {
    if (decimal == 0) {
        return;
    } else {
        decimal_to_binary(decimal / 2);
        printf("%d", decimal % 2);
    }
}