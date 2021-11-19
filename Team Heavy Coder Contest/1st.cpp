#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v;
    int num = 0, ld = 0, no_of_digit = 0, k = 1, res = 0,ini_num=0;

    cin >> num;
ini_num = num;
    while (num != 0)
    {
        ld = num % 10;
        v.push_back(ld);
        num = num / 10;
    }

    sort(v.begin(), v.end());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    no_of_digit = v.size();
    for (int i = no_of_digit - 1; i >= 0; i--)
    {
        res = res + v[i] * k;
        k = k * 10;
    }
    cout << res<<endl;
    cout << "Addition        : " << ini_num + res << endl;
    cout << "Substraction    : " << ini_num - res << endl;
    cout << "Multiplication  : " << ini_num * res << endl;
    cout << "Division        : " << ini_num / res << endl;

    return 0;
}