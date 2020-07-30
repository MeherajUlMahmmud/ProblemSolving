#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int x = n;
    int sum = 0;
    while(x != 0){
        sum += x % 10;
        x = x / 10;
    }
    printf("%d", sum);
    return 0;
}
