#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int num;
        cin >> num;
        for(int i = 0; i < num; i++)
        {
            for(int j = 0; j < num; j++)
            {
                cout << "*";

            }
            cout << endl;
        }
        if(T != 0)
            cout << endl;
    }
}

