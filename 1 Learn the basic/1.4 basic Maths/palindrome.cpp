
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 121;
    int dup = n;
    int revno = 0;

    while (n > 0)
    {
        int ld = n % 10;
        revno = (revno * 10) + ld;
        n = n / 10;
    }

    if (dup == revno)
        cout << "true"; 
    else
        cout << "false";

}
