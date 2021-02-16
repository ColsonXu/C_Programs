#include <stdio.h>

#define LOWER 0         /* lower bound */
#define UPPER 300       /* upper bound */
#define STEP  20        /* step size */

int main() {
    for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d\t%5.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
}
