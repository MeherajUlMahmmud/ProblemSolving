#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--) {
        string str_num, last;
        cin >> str_num;
        last = str_num.back();
        int num = atoi(last.c_str());
        if (num % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
}
