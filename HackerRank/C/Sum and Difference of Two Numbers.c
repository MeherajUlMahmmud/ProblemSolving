#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    float num3, num4;
    scanf("%d %d %f %f", &num1, &num2, &num3, &num4);
    printf("%d %d\n%.1f %.1f", num1+num2, num1-num2, num3+num4, num3-num4);
    return 0;
}
