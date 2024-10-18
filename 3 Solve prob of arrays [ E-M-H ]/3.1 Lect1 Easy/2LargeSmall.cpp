#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int secondLargest(int a[], int n)
{
    int largest = a[0];
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}
int secondSmallest(int b[], int n)
{
    int smallest = b[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (b[i] < smallest)
        {
            ssmallest = smallest;
            smallest = b[i];
        }
        else if (b[i] != smallest && b[i] < ssmallest)
        {
            ssmallest = b[i];
        }
    }
    return ssmallest;
}
pair<int, int> secOrderElements(int arry[], int n)
{
    int slargest = secondLargest(arry, n);
    int ssmallest = secondSmallest(arry, n);
    return {slargest, ssmallest};
}
/*
void sLargeSmall(int arry[], int n)
{
    if (n == 1 || n == 0)
        cout << -1 << " " << -1 << endl;
    sort(arry, arry + n);
    int secondSmall = arry[1];
    int secondLarge = arry[n - 2];

    cout << "second smallest " << secondSmall << endl;
    cout << "second largest " << secondLarge << endl;
}  */
int main()
{
    int n = 5;
    int arry[n] = {9, 7, 5, 3, 1};
    // sLargeSmall(arry, n);
    pair<int, int> result = secOrderElements(arry, n);
    cout << "Second largest: " << result.first << endl;
    cout << "Second smallest: " << result.second << endl;

    return 0;
}