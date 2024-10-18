#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int Pindex = partition(arr, low, high);
        quickSort(arr, low, Pindex - 1);
        quickSort(arr, Pindex + 1, high);
    }
}
vector<int> qs(vector<int> arr)
{
    quickSort(arr, 0, arr.size() - 1);
    return arr;
}
void print(vector<int> &arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
        if (i < len - 1)
        {
            cout << " , ";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
}
int main()
{
    vector<int> arry = {5, 68, 3, 99, 1};
    int n = arry.size();
    print(arry, n);
    arry = qs(arry);
    print(arry, n);
}

/*

#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arry, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arry[low];
    while (i < j)
    {
        while (arry[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arry[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arry[i], arry[j]);
    }
    swap(arry[low], arry[j]);
    return j;
}
void qs(vector<int> &arry, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(arry, low, high);
        qs(arry, low, pIndex - 1);
        qs(arry, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr)
{
    qs(arr, 0, arr.size() - 1);
    return arr;
}

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    print(arr, n);
    arr = quickSort(arr);
    print(arr, n);
    return 0;
}

*/