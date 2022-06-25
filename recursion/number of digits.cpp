int count(int n){
    //write your code here
    static int cnt=0;
    if(n>0)
    {
        cnt++;
        count(n/10);
    }
    else
    {
        return cnt;
    }
}


#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}