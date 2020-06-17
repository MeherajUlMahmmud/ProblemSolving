#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    int total_cost = 0, borrow = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; ++i){
        total_cost = total_cost + (i * k);
    }
    if (total_cost <= n) {
        cout << 0;
    }
    else {
        borrow = total_cost - n;
        cout << borrow;
    }
}
