int sumOfDigits(int n) {
    

    if(n==0)
        return 0;
    else{
           return (n+sumOfDigits(n-1));
    }
}


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
