#include <bits/stdc++.h>
using namespace std;
int majorityEle(vector<int> v)
{
    int count = 0;
    int ele;
    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0)
        {
            count = 1;
            ele = v[i];
        }
        else if (v[i] == ele)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == ele)
        {
            count1++;
        }
    }
    if (count1 > (v.size() / 2))
    {
        return ele;
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int a = majorityEle(arr);
    cout << a << endl;
    return 0;
}