/*
Problem Description:
Given a non-negative integer n as input, write a program that calculates the sum of its individual digits. For example, the sum of digits of 1234 is 1 + 2 + 3 + 4 = 10.

Input:
The program should accept a non-negative integer as input.

Output:
The program should print the sum of the digits of the input number.
*/

#include <bits/stdc++.h>
using namespace std;

int digitsSum(int n)
{
    int sum = 0;
    while (n)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int ans = digitsSum(n);
    cout << "Digits Sum of Number " << n << " is : " << ans;

    return 0;
}