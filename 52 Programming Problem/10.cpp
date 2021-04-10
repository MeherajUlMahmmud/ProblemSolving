#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        int r1, r2, b;
        float crr, rrr;
        cin >> r1 >> r2 >> b;

        crr = r2 / ((300 - b) / 6.0);
        if(r2 > r1) {
             rrr = 0.00;
       } else {
           rrr = (r1 + 1 - r2) / (b / 6.0);
       }

       printf("%.2f %.2f\n", crr, rrr);
    }
}

