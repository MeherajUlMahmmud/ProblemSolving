#include <bits/stdc++.h>

using namespace std;

int getFactorial(int n){
    int sum = 1;
    for (int i = n; i > 0; --i){
        sum = sum * i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    cout << getFactorial(n);
}
