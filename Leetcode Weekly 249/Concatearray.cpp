#include <bits/stdc++.h>
using namespace std;
//copythe functionhere

vector<int> getConcatenation(vector<int> &nums)
{
    /* Code By Mitesh Tank (codewithmitesh) :- www.linkedin.com/in/mitesh-tank , https://github.com/codewithmitesh ,   */
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0); //To run code faster in online IDE
    int n = nums.size();
    // vector<int> res(2 * n();

    for (int i = 0; i < n; i++)
    {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main()
{

    vector<int> s;
    s = {1, 3, 2, 1};
    getConcatenation(s);
    // cout<<yourfunctionhere(s); for int bool etc Return-type
    for (auto it = s.begin(); it != s.end(); it++) //for printing ans vector
        cout << *it << " ";

    return 0;
}