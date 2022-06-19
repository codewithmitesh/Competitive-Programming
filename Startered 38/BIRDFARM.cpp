/* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,
   https://www.codechef.com/users/codewithmitesh ,https://leetcode.com/codewithmitesh/, https://auth.geeksforgeeks.org/user/codewithmitesh/practice/ ,https://codeforces.com/profile/codewithmitesh   */
// included Libraries and namespace
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int main()
{

    int T = 1;
    cin >> T;
    while (T--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (z % y == 0 && z % x == 0)
        {
            cout << "ANY";
        }
        else if (z % x == 0 && z % y != 0)
        {
            cout << "CHICKEN";
        }
        else if (z & y == 0 && z % x != 0)
        {
            cout << "DUCK";
        }
        else
        {
            cout << "NONE";
        }
        cout << endl;
    }
    return 0;
}
