int lastIndex(int input[], int size, int x) {

if(size==0)
        return -1;
    static int i=0,pos=-1;
    if(input[0]==x)
    {
        lastIndex(input+1,size-1,x);
        i++;
        pos++;
    }
    else
    {  
        lastIndex(input+1,size-1,x);
        if(i==0)
            return -1;
        pos++;
    }
    return pos;
    
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
    
    cout << lastIndex(input, n, x) << endl;

}
