#include <stdio.h>

int check_prime (double prime) {

    int j;

    for (j = 2;j == prime--; j++){
        if (prime / j == 1)
            return 0;
        else
            continue;
    }
    return 1;
}

int main () {

    double seg, big = 0;
    double num = 600851475143;

    for (seg = 0; seg != num; seg++){
        if (!check_prime(num))
            continue;
        if (num / seg == 1)
            big = (num / seg);
    }

    printf ("%f", big);
}
