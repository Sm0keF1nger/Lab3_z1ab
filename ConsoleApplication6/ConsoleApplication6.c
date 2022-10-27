#include <stdio.h>
#include <math.h>

int main()
{
    int y, z;
    double x, result;
    printf("insert y:");
    scanf_s("%d", &y);

    printf("insert z:");
    scanf_s("%d", &z);

 /*   if ((y == -8) && (z - 2 * y != 0) && ((3 * y) / (z - 2 * y) > 0)) {
        x = sqrt((3 * y) / (z - 2 * y)) - y * z;
        printf("If y = %d, then:\n x = sqrt((3 * %d) / (%d - 2 * %d)) - %d * %d = %.0lf\n", y, y, z, y, y, z, x);
    }
    if (y == 10) {
        x = (y / 2) + (15 * z);
        printf("If y = %d, then:\n x = (%d / 2) + (15 * %d) = %.0lf", y, y, z, x);
    }
    if (y == 2) {
        x = y * z - 7 * z;
        printf("If y = %d, then:\n x = %d * %d - 7 * z = %.0lf", y, z, z, x);
    }
    if ((y == -8) && (y != 10) && (y != 2) && (z - 2 * y == 0) && ((3 * y) / (z - 2 * y) <= 0)) {
        printf("impossible to count");
    }*/



    if ((y == -8) && (z - 2 * y != 0) && ((3 * y) / (z - 2 * y) > 0)) {
        x = sqrt((3 * y) / (z - 2 * y)) - y * z;
        printf("If y = %d, then:\n x = sqrt((3 * %d) / (%d - 2 * %d)) - %d * %d = %.0lf\n", y, y, z, y, y, z, x);
    }
    else if(y == 10) {
        x = (y / 2) + (15 * z);
        printf("If y = %d, then:\n x = (%d / 2) + (15 * %d) = %.0lf", y, y, z, x);
    }
    else if (y == 2) {
        x = y * z - 7 * z;
        printf("If y = %d, then:\n x = %d * %d - 7 * z = %.0lf", y, z, z, x);
    }
    else {
        printf("impossible to count");
    }
    
}
