int firstIndex(int input[], int size, int x) {
  
    
     if(size==0)
        return -1;
    else{
    static int i = 0;
    if(input[0]==x)
        return i;
    else{
        i++;
        firstIndex(input+1,size-1,x);
    }
    }
    

}


#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}