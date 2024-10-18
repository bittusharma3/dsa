/*
#include <stdio.h>
void *insertionSort(int arr[], int length)
{
    int i, value, k;
    for (i = 1; i < length; i++)
    {
        value = arr[i];
        k = i - 1;
        while ((k >= 0) && (arr[k] > value))
        {
            arr[k + 1] = arr[k];
            k = k - 1;
        }
        arr[k + 1] = value;
    }
}

void *printShawtty(int *x, int length)
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
    int array[7] = {7, 6, 5, 4, 3, 2, 1};
    printShawtty(array, size);
    insertionSort(array, size);
    printShawtty(array, size);
}
*/
#include <bits/stdc++.h>
using namespace std;
void insertyS(int arr[], int len)
{
    int k, value, i;
    for (int i = 1; i < len; i++)
    {
        value = arr[i];
        k = i - 1;
        while (k >= 0 && arr[k] > value)
        {
            arr[k + 1] = arr[k];
            k = k - 1;
        }
        arr[k + 1] = value;
    }
}
void print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    int n = 5;
    ;
    int arry[n] = {5, 4, 7, 9, 1};
    print(arry, n);
    insertyS(arry, n);
    print(arry, n);
    return 0;
}