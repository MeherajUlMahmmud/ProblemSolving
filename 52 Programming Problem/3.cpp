#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T = 1000, count = 0;

    while(T != 0) {
        cout << T << "\t";
        T--;
        count++;
        if(count == 5){
            cout << endl;
            count = 0;
        }
    }
}

