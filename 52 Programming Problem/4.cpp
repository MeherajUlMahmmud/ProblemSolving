#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int num;
        cin >> num;
        cout << "Case "<< i << ":";
        for (int j = 1; j <= num/2; j++) {
            if(num % j == 0)
                cout << " " << j;
        }
        cout << " " << num << endl;
    }
}

