#include <bits/stdc++.h>
using namespace std;
const int N = 256;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    if (s1.length() != s2.length())
    {
        cout << "No" << endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    //    cout<<s1<<" "<<s2<<endl;

    int count[N] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }
    cout << "Yes" << endl;
    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            cout << (char)i << " " << count[i] << endl;
        }
    }

    return 0;
}