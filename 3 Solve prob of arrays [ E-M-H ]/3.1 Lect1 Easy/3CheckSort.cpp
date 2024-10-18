#include <bits/stdc++.h>
using namespace std;
/* void printy(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
} */
void checkSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            cout << "arry is not sorted , we have to sort array ";
            break;
        }
        else
        {
            cout << " array is sorted " << endl;
            break;
        }
    }
}
int main()
{
    int n = 5;
    // int arr[n] = {1,2,3,5,6};
    int arr[n] = {1, 1, 1, 4, 1};
    checkSort(arr, n);
    return 0;
}