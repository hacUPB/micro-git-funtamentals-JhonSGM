#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr,"Usage: program <number>\n");
        return 1;
    }
    
    int number = atoi(argv[1]); // Convert the console input argument to an integer
    
    /* Verify that the entered number is greater than or equal to zero */
    if (number < 0) {
        fprintf(stderr, "The number must be greater than or equal to zero\n");
        return 1;
    }

    // Calculate factorial
    long long int factorial = 1;
    long long int b;
    for (b = number; b > 1; b--) {
        factorial *= b;
    }
    
    // Print the factorial result
    printf("The factorial of %lld is: %lld\n", number, factorial);

    // Check if the number is prime
    int count = 0;
     for (int index = 1; index <= number; index++) {
         if (number % index == 0) {
        count++;
            }
            }

      // Print the prime number result
    if (count == 2) {
        printf("%d is a prime number\n", number);
       } else {
        printf("%d is not a prime number\n", number);
    }
    
    return 0;
}
