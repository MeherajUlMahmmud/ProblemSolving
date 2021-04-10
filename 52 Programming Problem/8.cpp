#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, count = 1;
    cin >> T;
    while(count <= T) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            int temp = b;
            b = c;
            c = temp;
        }
        if(a > b) {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << "Case " << count << ": " << a << " " << b << " " << c << endl;
        count++;
    }
}
