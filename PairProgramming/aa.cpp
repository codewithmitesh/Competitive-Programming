#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,
        count = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        
        if(a[i]==S){
            count++;
            
        }else if(a[i]=='L'||a[i]=='R'){
            count = count +2;
        }
       

        for (int i = 1; i < n; i++)
        {

            if (a[i] == 'L' || a[i] == 'R')
            {

                if (a[i - 1] == 'S')
                {
                    count++;
                }
                else if ((a[i] == 'L' && a[i - 1] == 'R') || (a[i] == 'R' && a[i - 1] == 'L'))
                {
                    count = count + 2;
                }
            }
            else if (a[i] == 'S')
            {
                if (a[i - 1] == 'L' || a[i - 1] == 'R')
                {
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}
