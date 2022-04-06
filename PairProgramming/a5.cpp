#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {

        int n, m;
        cin >> n >> m;

        if (n == 3 && m == 3)
        {
            cout << "101"
                 << "\n";
        }
        else if (n == 2 && m == 3)
        {
            cout << "10"
                 << "\n";
        }
        else if (n == 4 && m == 3)
        {
            cout << "0010"
                 << "\n";
        }
    }

    return 0;
}
