void reverseString(char[] s) {
   int left = 0;
   int end = s.length-1;
   while (left < end) {
      
      char temp = s[left];
      s[left] = s[end];
      s[end] = temp;
      
      left ++;
      end --;





// print duplicate characters from given string

#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[100];
    cout<<"Enter string: ";
    cin.getline(string,100);
    cout<<"Duplicate characters "<<endl;
    for(int i=0;i<strlen(string);i++){                   
        for(int j=i+1;j<strlen(string);j++){
            if(string[i]==string[j]){                   
                cout<<string[i]<<endl;                  
                break;
            }
        }
    }
    return 0;
}
