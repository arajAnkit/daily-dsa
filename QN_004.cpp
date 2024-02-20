/*
Problem Description:
Given non negative integer n. Write a program to print fibonacci Sequence (Series) up to n.

Note - Series will be stared from 0th place

The Fibonacci sequence is a series of numbers where each term is the sum of the previous two terms. The first two terms are 0 and 1. For example, the Fibonacci sequence up to 13 is: 0, 1, 1, 2, 3, 5, 8, 13.

Input:
The program should accept a non-negative integer as input, specifying the number of terms to be displayed in the Fibonacci sequence.

Output:
The program should print the Fibonacci sequence up to the specified number of terms.
*/

#include <bits/stdc++.h>
using namespace std;

/*
// Code to print fibonacci Sequence nth time.
void printFibonacci(int n)
{
    int secondLast = 0;
    int firstLast = 1;

    cout << secondLast << " " << firstLast;

    for (int i = 2; i < n; i++)
    {
        int current = firstLast + secondLast;
        cout << " " << current;
        secondLast = firstLast;
        firstLast = current;
    }
}
int main()
{
    int n;
    cin >> n;

    printFibonacci(n);
    return 0;
}
*/

// _______________________________________________________________________________
// Fibonacci Sequence up to n
void fibonacciUptoN(int N)
{
    int secondLast = 0;
    int last = 1;
    int current = -1;
    cout << secondLast << " " << last;

    while (current < N)
    {
        if (current != -1)
        {
            cout << " " << current;
        }
        current = last + secondLast;

        secondLast = last;
        last = current;
    }
}
int main()
{
    int N;
    cin >> N;

    fibonacciUptoN(N);
    return 0;
}