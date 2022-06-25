int multiplyNumbers(int m, int n) {
    
        if (n != 0)
        return (m + multiplyNumbers(m, n - 1));
 
    
    else
        return 0;


}

#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
