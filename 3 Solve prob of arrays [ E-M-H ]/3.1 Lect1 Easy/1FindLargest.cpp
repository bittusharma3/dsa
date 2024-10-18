#include <bits/stdc++.h>
using namespace std;
int printy(vector<int> &arry)
{
    for (int i = 0; i < arry.size(); i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
}
/*
int findLarge(vector<int> &arry)
{
    sort(arry.begin(), arry.end());
    return arry[arry.size() - 1];
}  */

int largestElement(vector<int> &aray, int n)
{
    int largest = aray[0];
    for (int i = 0; i < n; i++)
    {
        if (aray[i] > largest)
        {
            largest = aray[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr1 = {5, 9, 4, 2, 1};
    vector<int> arr2 = {8, 7, 6, 5, 4};
    // cout << "unsorted array " << printy;
    cout << "largest no. in array 1 is   = " << largestElement(arr1, arr1.size());
    cout << endl;
    // cout << "printing unsorted arry " << printy(arr2);
    // cout << endl;
    cout << "largest no. in array 2 is   = " << largestElement(arr2, arr2.size());
}