#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = -2;
    double y = -3;

    double z1 = pow(x, 2) + pow(y, 2) - (x * y) + 2;
    double z2 = pow(x - y, 3) - 3;
    double z3 = (2*pow(x, 3) - 0.5*pow(x,2) -x + 4) / y;

    printf("%f\n", z1);
    printf("%f\n", z2);
    printf("%f\n", z3);

    return 0;
}
