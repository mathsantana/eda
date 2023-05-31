#include <stdio.h>
#include <float.h> 

#define ld long double

void main() {
    int n;
    scanf("%d", &n);

    ld last = 1; 
    ld prev = 1;
    ld aux = 0;

    if (n >= 1) {
        printf("%.0Lf\n", prev);
    }

    for (int i = 1; i < n; i++) {
        printf("%.0Lf\n", last);
        aux = last;
        last = last + prev;
        prev = aux;

        if (prev > 0 && prev > LDBL_MAX - last) {
            printf("LIMITE. i = %d\n", i);

            break;
        }
    }


    return;
}