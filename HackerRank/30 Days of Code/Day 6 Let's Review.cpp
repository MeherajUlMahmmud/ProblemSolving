#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    while(n){
        char a[10000];
        scanf("%s", a);
        int i = 0;
        while(a[i] != '\0'){
            if(i % 2 == 0){
                printf("%c", a[i]);
            }
            ++i;
        }
        printf(" ");

        i = 0;
        while(a[i] != '\0'){
            if(i % 2 != 0){
                printf("%c", a[i]);
            }
            ++i;
        }
        --n;
        printf("\n");
    }
    
    return 0;
}
