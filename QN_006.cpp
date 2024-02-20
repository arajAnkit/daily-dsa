/*
Problem:
Given a signed integer x, return the integer obtained by reversing the digits of x.

Example:
Input: x = 123
Output: 321
*/

#include <bits/stdc++.h>
using namespace std;

int digitsSum(int n)
{
    int revNum = 0;
    while (n)
    {
        int rem = n % 10;
        revNum = revNum * 10 + rem;
        n = n / 10;
    }

    return revNum;
}

int main()
{
    int n;
    cin >> n;

    int ans = digitsSum(n);
    cout << "Reverse of Number " << n << " is : " << ans;

    return 0;
}