#include <stdio.h>

int main() {
    int number;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Print the number in hexadecimal format
    printf("Hexadecimal: %X\n", number);
    
    // Print the number in octal format
    printf("Octal: %o\n", number);
    
    return 0;
}
