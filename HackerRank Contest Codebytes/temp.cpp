#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string s;
    cin >> s;

    int countofS = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 's')
        {
            countofS++;
        }
    }
    int total = s.length();
    if (countofS > (total / 2))
    {
        cout << total;
    }
    else
    {
        cout << 2 * countofS - 1;
    }

    return 0;
}
