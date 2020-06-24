#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;
    cin >> n >> p;
    int arr1[p];
    unordered_set<int> s; // stores distinct integers

    for(int i = 0; i < p; ++i)
    {
        cin >> arr1[i];
        s.insert(arr1[i]);
    }

    cin >> q;
    int arr2[q];
    for(int i = 0; i < q; ++i)
    {
        cin >> arr2[i];
        s.insert(arr2[i]);
    }

    if(s.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
