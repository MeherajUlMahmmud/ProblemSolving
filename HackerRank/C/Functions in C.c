#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int ans = a;
    if(ans < b){
        ans = b;
    }
    if(ans < c){
        ans = c;
    }
    if(ans < d){
        ans = d;
    }
    return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

