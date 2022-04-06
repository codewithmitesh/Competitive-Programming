// #CSES PRoblem Set
// CodewithMitesh

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        // find the range
        long base = 9, digits = 1;
        while (n - base * digits > 0)
        {
            n = n - base * digits;
            base *= 10;
            digits++;
        }

        int index = n % digits;
        if (index == 0)
        {

            index = digits;
        }
        long num = 1;
        for (int i = 1; i < digits; i++)
        {
            num *= 10;
        }

        if (index == digits)
        {
            num = num + (n / digits - 1);
        }
        else
        {
            num = num + (n / digits);
        }

        for (int i = index; i < digits; i++)
        {
            num /= 10;
        }
        cout << num % 10 << "\n";
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
