

#include <bits/stdc++.h>
using namespace std;
void mergeSort(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.emplace_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void merge(vector<int> &arr, int low, int high)
{
    if (low == high)
    {
        return;
    }
    int mid = (low + high) / 2;
    merge(arr, low, mid);
    merge(arr, mid + 1, high);
    mergeSort(arr, low, mid, high);
}
void display(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
       std:: cout << arr[i];
    }

    
    std::cout << endl;
}
int main(){
    vector<int> arr = { 5 , 9,4,8,1};
    int n =5;
    display(arr , n);
    merge(arr ,0 , n-1);
    display(arr , n );
}



/*
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = 7;
    cout << "before sorting :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "after sorting : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}



Merge Sort is a divide and conquers algorithm, it divides the given array into equal parts and then merges the 2 sorted parts.
There are 2 main functions :
merge(): This function is used to merge the 2 halves of the array. It assumes that both parts of the array are sorted and merges both of them.
mergeSort(): This function divides the array into 2 parts. low to mid and mid+1 to high where


Time complexity: O(nlogn)

Reason: At each step, we divide the whole array, for that logn and we assume n steps are taken to get sorted array, so overall time complexity will be nlogn

Space complexity: O(n)

Reason: We are using a temporary array to store elements in sorted order.

Auxiliary Space Complexity: O(n)



#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arry, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arry[left] <= arry[right])
        {
            temp.emplace_back(arry[left]);
            left++;
        }
        else
        {
            temp.emplace_back(arry[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.emplace_back(arry[left]);
        left++;
    }
    while (right <= high)
    {
        temp.emplace_back(arry[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arry[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arry, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arry, low, mid);
    mergeSort(arry, mid + 1, high);
    merge(arry, low, mid, high);
}

void print (vector <int> &arr, int n ){
    for (int i=0 ; i< n ; i++){
        cout << arr[i];
    }
    cout <<endl;
}
int main()
{
    vector<int> array = {9, 4, 5, 6, 2, 1};
    int n = 6;
    print( array , n);
    mergeSort(array, 0, n - 1);
    print(array , n);
    return 0;
}

*/