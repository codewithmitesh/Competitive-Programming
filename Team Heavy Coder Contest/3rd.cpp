#include <bits/stdc++.h>
using namespace std;
const int N = 256;
int main()
{
    int Fy_H, Fy_M, Fy_S, Sy_H, Sy_M, Sy_S, Sum_H, Sum_M, Sum_S;

    int Diff_H, Diff_M, Diff_S, Fy_chn_H, Fy_chn_M, Fy_chn_S;
    cin >> Fy_H >> Fy_M >> Fy_S;
    cin >> Sy_H >> Sy_M >> Sy_S;
    if (Fy_H < Sy_H)
    {
        swap(Fy_H, Sy_H);
        swap(Fy_M, Sy_M);
        swap(Fy_S, Sy_S);
    }
    Fy_chn_H = Fy_H;
    Fy_chn_M = Fy_M;
    Fy_chn_S = Fy_S;
    // cout << "Fy_H: " << Fy_H << "Fy_M: " << Fy_M << "Fy_S: " << Fy_S;
    //Sum:
    Sum_S = Fy_S + Sy_S;
    if (Sum_S > 60)
    {
        Sum_S = Sum_S - 60;
        Fy_M++;
    }

    Sum_M = Fy_M + Sy_M;
    if (Sum_M > 60)
    {
        Sum_M = Sum_M - 60;
        Fy_H++;
    }
    Sum_H = Fy_H + Sy_H;

    cout << "Sum: " << Sum_H << " " << Sum_M << " " << Sum_S << endl;

    //Diffrence:- -

    Diff_S = Fy_chn_S - Sy_S;
    if (Diff_S < 0)
    {
        Diff_S = Diff_S + 60;
        Fy_chn_M--;
    }
    Diff_M = Fy_chn_M - Sy_M;
    if (Diff_M < 0)
    {
        Diff_M = Diff_M + 60;
        Fy_chn_H--;
    }

    Diff_H = Fy_chn_H - Sy_H;

    cout << "Difference: " << Diff_H << " " << Diff_M << " " << Diff_S << endl;

    return 0;
}