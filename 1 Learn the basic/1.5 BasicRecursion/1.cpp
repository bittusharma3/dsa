#include <iostream>
using namespace std;
int cnt = 0;
void print()
{
    if (cnt == 3)
        return;
    cout << cnt << endl;
    cnt++;
    print();
}
int main()
{
    print();
    return 0;
}

/*

   What is Recursion?
           It is a phenomenon when a function calls itself indefinitely until a specified condition is fulfilled.

   What is Stack Overflow in Recursion?
           Whenever recursion calls are executed, they’re simultaneously stored in a recursion stack where they wait for the completion of the recursive function. A recursive function can only be completed if a base condition is fulfilled and the control returns to the parent function. 
           But, when there is no base condition given for a particular recursive function, it gets called indefinitely which results in a Stack Overflow i.e, exceeding the memory limit of the recursion stack and hence the program terminates giving a Segmentation Fault error. 

   Recursion Tree :
           Instead of typing entire funct , we basically represnt them in terms of f() , 
           this is what we called as this is Recursion tree .
           Also a doagram of something frm which we represent we call someone and then again call someone from that same funct is knw as Tree.
           A recursive tree is basically a representative form of recursion which depicts how functions are called and returned as a series of events happening consecutively. It is a pictorial description of the process of recursion as illustrated below : 

   Base Condition:
           It is the condition that is written in a recursive function in order for it to get completed and not to run infinitely. After encountering the base condition, the function terminates and returns back to its parent function simultaneously.

   
  */