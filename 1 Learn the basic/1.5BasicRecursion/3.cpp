/*

^sum of first n number->
two types =
            1 . functional;
            2 . parameter.

            */

//  f(n)=     summision of first n numbers

#include <bits/stdc++.h>
using namespace std;
int Summ(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return (n + Summ(n - 1));
    }
}

// factorial of n no.
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else{
        return (n * factorial(n - 1));
    }
}
int main()
{
    int n ;
    cin >> n ;
    cout << "the sum of first n no. is : " << Summ(n) << endl;
    // factorial of n no.
    cout << "the factorial of n no. is : " << factorial(n) << endl;
}

