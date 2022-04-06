#include <bits/stdc++.h>

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, count = 0;
    cin >> n;
    int arr[n][2];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i][0] >> arr[i][1];
        if (arr[i][0] + 1 < arr[i][1])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
