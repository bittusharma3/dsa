#include <iostream>
using namespace std;
string twoSum(int n, int arr[], int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
                return "yes";
        }
    }
    return "no";
}
int main()
{
    int n = 6;
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n , arr, target);
    cout << "This is the answer for variant 1: "<< ans ;
    return 0;
}
