#include <iostream>

using namespace std;

class Fraction{ 
    
   private:      
   int numerator;        
   int denominator;
   
   public:
   Fraction(int numerator , int denominator){       
         this->numerator=numerator;
         this->denominator=denominator;
   }
   
   void display() {      
      cout << numerator << "/" << denominator;   
   }
};
   
   
   int main(){
           
   Fraction f1(10,11); 
   f1.display();   
   cout<<endl;

   Fraction f2(0,1); 
   f2.display();   
   cout<<endl;
   
   Fraction f3(0,9); 
   f3.display();   
   cout<<endl;
   
   return 0;
}

   
   
