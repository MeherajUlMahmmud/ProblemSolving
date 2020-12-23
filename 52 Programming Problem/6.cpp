#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T, sum;
    cin >> T;
    while(T--)
    {
        string line, first, last;
        cin >> line;
        first = line.at(0);
        last = line.back();
        sum = stoi(first) + stoi(last);
        cout << "Sum = " << sum << endl;
    }
}
