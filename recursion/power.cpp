int power(int x, int n) 

{
 

   if (n == 0)
   return 1;
   else
   return (x * power(x, n-1));
    
    
    
}


#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}