// it includes print name N times , print 1 to n , print n to 1 , 


//               print name 1 to n times 


#include<bits/stdc++.h>
using namespace std;
void func(int i, int n){
   // Base Condition.
   if(i>n) return;
   cout<<"sanat"<<endl;
   // Function call to print till i increments.
   func(i+1,n);
}
int main(){

  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;
}




//                print 1 to n 

#include<bits/stdc++.h>
using namespace std;
void func2(int i, int n){
   // Base Condition.
   if(i>n) return;
   cout<<i<<endl;
   // Function call to print i till i increments to n.
   func2(i+1,n);
}
int main(){
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func2(1,n);
  return 0;
}



//               print n to 1 


#include<bits/stdc++.h>
using namespace std ;
void func3(int i , int n){
if (i<1)
return ;
cout << i<<endl;
func3(i-1, n );
}
int main (){
    int n =4;
    func3( n , n);
    return 0;
}

