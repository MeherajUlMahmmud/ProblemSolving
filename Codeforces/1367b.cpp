/*We split all the positions in which the parity of the index does not match with the parity of the element into two arrays. If there is an odd number in the even index, add this index to the e array.

Otherwise, if there is an even number in the odd index, add this index to the o array. Note that if the sizes of the o and e arrays are not equal, then there is no answer. Otherwise, the array a can be made good by doing exactly |o| operations by simply swapping all the elements in the o and e arrays.*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;

            if (x % 2 != i % 2)
            {
                if (x % 2 == 0)
                {
                    a++;
                }
                else
                {
                    b++;
                }
            }
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}
