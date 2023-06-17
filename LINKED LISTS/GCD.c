#include <stdio.h>
void main() {
    int m, n;
    printf("Euclidian Algorithm:\n ");
    printf("Enter-two integer numbers: ");
    scanf ("%d %d", &m, &n);
    while (n > 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    printf ("GCD = %d \n",m);
}
