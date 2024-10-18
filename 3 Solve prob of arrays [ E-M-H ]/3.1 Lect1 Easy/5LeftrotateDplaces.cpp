/*
we aare doing this for roating array at d = 1

int only1D(int arr[] , int n ){
    int temp = arr[0];
        for(int i =0 ; i < n ; i ++)
        {
        arr[i-1] = arr[i];
        }
    arr[n-1]=temp;
}

*/

// now doing for d =n

#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
/* 2.  we using the method in which we are firslty roatating the d no. of elements of array 
 after that we are roatating the d -n no. of elements in array and after this we gonna rotate whole array 
*/
void Rotateeletoright(int arr[], int n, int k)
{
  reverse(arr, 0, n - k - 1);
  reverse(arr, n - k, n - 1);
  reverse(arr, 0, n - 1);
}

/* 3.  this is also the method but we have to use the goud one so this is not ths gud 

void leftROtate(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
*/
int main(){
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}