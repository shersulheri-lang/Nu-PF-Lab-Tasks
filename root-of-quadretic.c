#include <stdio.h>

int main() {
    int a, b, c;
    float disc;
    float x1, x2;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter b value: ");
    scanf("%d", &b);

    printf("Enter c value: ");
    scanf("%d", &c);

    disc = b * b - 4 * a * c;

    if (disc >= 0, a != 0) {
        x1 =(-b+sqrt(disc))/(2*a);
        x2 =(-b-sqrt(disc))/ (2 * a);

        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else
        printf("roots are complex/imagenry.\n");
    

    return 0;
}