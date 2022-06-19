// check if the given string is a palindrome or not
bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;
 
    while ( start < end)
    {
        
        if (str[start] != str[end]) {
            return false;
        }
 
        start++;
        end--;
    }
 
    return true;
}
 
int main()
{
    string str ;
    cout<<"Enter the string : "<<endl;
    cin>>str;
 
    if (isPalindrome(str)) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }
 
    return 0;
}









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





// string is a valid shuffle of two strings or not 

#include<bits/stdc++.h>
  using namespace std;

  bool isvalid(string first, string second, string final){
  if(first.length() + second.length() != final.length()) {
    return false;
  }

  
  sort(first.begin(),first.end());
  sort(second.begin(),second.end());
  sort(final.begin(),final.end());

  
  int i=0,j=0,k=0;
  while( k < final.length()){
  
  
  if( i<first.length() && first[i] == final[k] )
    i++;

  
  else if( j<second.length() && second[j] == final[k] )
    j++;
  
  
  else
    return false;

  k++;
 }

  return true;
}

int main()
{
  string str1,str2,str;

  
  cout<<"Enter the value of string 1 : "; cin>>str1;

  cout<<"Enter the value of string 2 : "; cin>>str2;

  cout<<"Enter the string  to be checked : "; cin>>str;

  if(isvalid(str1,str2,str)){
  cout<<" Valid shuffle ";
 }
 else{
  cout<<" Invalid shuffle ";
 }

  return 0;
}
