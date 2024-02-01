#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }
    
    int number = atoi(argv[1]); // Convert the console input argument to an integer
    
    /* Verify that the entered number is greater than or equal to zero */
    if (number < 0) {
        fprintf(stderr, "El número debe ser mayor o igual a cero.\n");
        return 1;
    }

    // Calculate factorial
    int factorial = 1;
    int b;
    for (b = number; b > 1; b--) {
        factorial *= b;
    }
    
    // Print the factorial result
    printf("El factorial de %d es %d\n", number, factorial);

    // Check if the number is prime
    int count = 0;
    int index;
    for (index = 1; index <= number; index++) {
        if (number % index == 0) {
            count++;
        }
    }
    
    // Print the prime number result
    if (count == 2) {
        printf("%d es un número primo\n", number);
    } else {
        printf("%d no es un número primo\n", number);
    }
    
    return 0;
}
