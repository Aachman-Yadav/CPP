#include<bits/stdc++.h>
using namespace std;

int main(){
  
   // float , int , char , bool , double , long int , long long int.
   // above all are datatypes float for decimal and double too and bool give 0 and 1 means true and false (0 for only 0
   // and agr true false nahi likha aur no. likha toh 0 ke alawa saare no. pe 1 dega means true)
   long long int d = 12345;
   cout<<d;
   bool a = true; 
   bool b = false;
   bool c = 0;
   bool e = 12;
   cout<<endl<<a<<b<<c<<e;
    // modulo operation add,subtract,into,div ke alawa operarion. Modulo remainder dega divison mai, eg. below.
    // modulo agr 1st no. -ve ho toh -ve ans dega aur agr 2nd no. -ve ho toh +ve ans dega.
    cout<< endl;
    cout<<37%5;
    // ++ and -- operation 
    // ab agr koi dusra variable lo aur uske aage ++ ya -- lagau toh wo +1 aur -1 kar dega, for eg.
    int g = 12;
    cout<<g<<endl;
    int y = (g++);
    cout<<g<<endl<<y<<endl<<endl;
   // agr baad mai ++ mtlb phele use phir increment agr phele ++ mtlb increment phri use
    char p = 'b';
    cout<< (int) p<<endl;
    char q = 'd';
    cout<< p-q;
    
}