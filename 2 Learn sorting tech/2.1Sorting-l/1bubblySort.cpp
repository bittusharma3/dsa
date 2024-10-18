/*
#include <stdio.h>
int *bubblySort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int printSort(int *x, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d", x[i]);
    }
    printf("\n");
}
int main()
{
    int size = 7;
    int a[7] = {9, 8, 7, 6, 5, 4, 3};
    printSort(a, size);
    bubblySort(a, size);
    printSort(a, size);
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
void bubblyS(int arr[], int l)
{
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int printy(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int n = 5;
    int arr[n] = {9, 5, 3, 2, 7};
    printy(arr, n);
    bubblyS(arr, n);
    printy(arr, n);
    return 0;
}