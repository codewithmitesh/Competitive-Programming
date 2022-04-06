#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, m;
    cin >> n >> m;
    int seats[n];
    int grp[m];
    for (int i = 0; i < n; i++)
    {
        cin >> seats[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> grp[i];
    }
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (grp[i] <= seats[j])
            {
                seats[j] -= grp[i];
                cout << j + 1 << " ";
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << 0 << " ";
    }

    return 0;
}
