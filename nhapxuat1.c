#include <stdio.h>
#include <math.h>

int main() {
    float x;
    printf("Nhap gia tri x: ");
    scanf("%f", &x);

    printf("x^2 = %.2f\n", pow(x, 2));
    printf("x^3 = %.2f\n", pow(x, 3));
    printf("x^4 = %.2f\n", pow(x, 4));

    return 0;
}

