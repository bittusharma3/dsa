// reverse of an array
// check if the fnc is palindrome using recursion

#include <iostream>
using namespace std;
// for reverse
void reverse(int i, int arry[], int n)
{
    if (i >= n / 2)
        return;
    swap(arry[i], arry[n - i - 1]);
    reverse(i + 1, arry, n);
}

// for Palindrome
// in bool if it is true then it prints 1 and if it is false it returns 0

bool palindrome(int i, string &s)
{
    int n;
    if (i > s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return palindrome(i + 1, s);
}

int main()
{
    // for reverse
    int n;
    cin >> n;
    int arry[n];
    for (int i = 0; i < n; i++)
        cin >> arry[i];
    reverse(0, arry, n);
    for (int i = 0; i < n; i++)
        cout << arry[i] << " ";
    cout << endl;

    // for palindrome
    string s = "madsm";
    cout << palindrome(0, s);
    return 0;
}
