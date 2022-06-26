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