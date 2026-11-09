#include<stdio.h>

float base, height;

void areaNoArgNoReturn() {

    printf("\n[No Arguments, No Return Value]\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    float area = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", area);
}

void areaArgNoReturn(float b, float h) {
    printf("\n[Arguments, No Return Value]\n");
    float area = 0.5 * b * h;
    printf("Area of triangle = %.2f\n", area);
}

float areaArgReturn(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    float b, h, area;

    areaNoArgNoReturn();

    printf("\nEnter base and height: ");
    scanf("%f%f", &b, &h);
    areaArgNoReturn(b, h);

    area = areaArgReturn(b, h);
    printf("\n[Arguments, Return Value]\n");
    printf("Area of triangle = %.2f\n", area);

    return 0;
}