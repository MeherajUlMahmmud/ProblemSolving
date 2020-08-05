#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, count = 1;
    cin >> n >> m;

    while(n > 0)
    {
        if(n%2 != 0)
        {
            for(int i = 0; i < m; i++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else
        {
            if(count%2 != 0)
            {
                for(int i = 0; i < m-1; i++)
                {
                    cout << ".";
                }
                cout << "#" << endl;
            }
            else
            {
                cout << "#";
                for(int i = 0; i < m-1; i++)
                {
                    cout << ".";
                }
                cout << endl;
            }
            count++;
        }
        n--;
    }
}
