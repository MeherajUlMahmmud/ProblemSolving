#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        long long int fact = 1;
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld\n", fact);
    }
}


