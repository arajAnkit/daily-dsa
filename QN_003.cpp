/*
Problem Description:
The factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n. For example, the factorial of 5 is 5! = 5 x 4 x 3 x 2 x 1 = 120.

Write a program that takes a non-negative integer as input and calculates its factorial.

Input:
The program should accept a non-negative integer as input. n should be less than equal to 8.

Output:
The program should print the factorial of the input number.

Constraints:
The input number should be non-negative.
The program should handle overflow errors for large factorials.
*/

#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = n; i > 0; i--)
    {
        ans = ans * i;
    }

    return ans;
}


int main()
{
    int n;
    cin >> n;

    if (n <= 8)
    {
        int ans = factorial(n);
        cout << "Factorial of " << n << " is : " << ans;
    }
    else
    {
        cout << "Enter number less than 9";
    }

    return 0;
}