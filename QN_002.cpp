/*
Problem Statement:
Given a positive integer n, write a C++ program to find the sum of all the natural numbers from 1 to n.

Input:
The input consists of a single integer n, representing the upper limit for the natural numbers.

Output:
The program should output the sum of all natural numbers from 1 to n.

Example:
For the input 5, the output should be 15 (1 + 2 + 3 + 4 + 5).

Constraints:
n will be a positive integer.

Challenge Levels:
Easy: Solve the problem using a loop to iterate through each number from 1 to n and add them to a running total.
Medium: Solve the problem using a mathematical formula for the sum of an arithmetic series, which is known to be n * (n + 1) / 2.
*/

#include <iostream>
using namespace std;

int method1(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += i;
    }

    return ans;
}

int method2(int n)
{
    int ans = n * (n + 1) / 2;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans1 = method1(n);
    cout << "Sum of " << n << " Natural Number is : " << ans1 << endl;
    int ans2 = method2(n);
    cout << "Sum of " << n << " Natural Number is : " << ans2 << endl;

    return 0;
}