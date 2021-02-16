#include <stdio.h>
#include <ctype.h>

float c_to_f(float c) {
    return 9.0/5.0 * c + 32;
}

int main() {
    float cel;
    char toggle = 'y';

    do {
        printf("Celsius: ");
        scanf("%f", &(cel));
        printf("%.1fC is %.1fF.\n\nContinue? (Y/n)", cel, c_to_f(cel));
        getchar();
        printf("");
    } while (tolower(getchar()) != 'n');

    return 0;
}
