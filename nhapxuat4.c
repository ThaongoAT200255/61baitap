
#include <stdio.h>
#define PI 3.14159265359

int main() {
    float r, dienTich, theTich;

    printf("Nhap ban kinh r: ");
    scanf("%f", &r);

    dienTich = 4 * PI * r * r;
    theTich = (4.0 / 3) * PI * r * r * r;

    printf("Dien tich hinh cau: %.2f\n", dienTich);
    printf("The tich hinh cau: %.2f\n", theTich);

    return 0;
}
