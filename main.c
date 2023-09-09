#include <stdio.h>
#include <string.h>

int isMultipleOf(int number, int base) {
    return number % base == 0;
}

void printFizzBuzz(int number) {
    char output[9] = "";

    if (isMultipleOf(number, 3)) {
        strcat(output, "Fizz");
    }
    if (isMultipleOf(number, 5)) {
        strcat(output, "Buzz");
    }

    if (strlen(output) == 0) {
        printf("%d\n", number);
    } else {
        printf("%s\n", output);
    }
}

int main() {
    for (int i = 1; i <= 100; i++) {
        printFizzBuzz(i);
    }
    return 0;
}
