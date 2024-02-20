/*
Problem Description:
Given three numbers as input, write a program to find the largest number among them.

Input:
The input consists of three integer numbers.

Output:
The program should output the largest number among the given three numbers.

Example:
For the input 10 20 30, the output should be 30.
*/

#include <iostream>
using namespace std;

int largestNumber(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
        return c;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = largestNumber(a, b, c);
    cout << "Largest Number is : " << ans;

    return 0;
}