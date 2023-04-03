#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Original string: %s", str);
    printf("Reversed string: ");
    reverse(str);
    return 0;
}

void reverse(char *str) {
    if (*str == '\0') {
        return;
    } else {
        reverse(str + 1);
        printf("%c", *str);
    }
}