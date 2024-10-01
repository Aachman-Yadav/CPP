#include<bits/stdc++.h>
using namespace std;
// void swap(int a, int b){
//     int temp = a ;
//     a = b;
//     b = temp;
// }

// int main(){
//     int a =4 , b =5 ;
    // cout<<"the value of a is"<<a<<endl;
    // cout<<"the value of b is"<<b<<endl;
    // swap(a, b);
//     cout<<"the new value of a is"<<a<<endl;
//     cout<<"the new value of b is"<<b<<endl;
//     but but BUT this will not change the value of a and b 
//     swap karne ke liye pointer use karna hoga mtlb address dena hoga.    
//     mtlb har jagah '*' ka use karna padega
//     aur jaha swap karna hai waha & bhi lagana padega 


// void swapPointer(int* a, int* b){
//     int temp = *a; 
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a =4 , b=5;
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
//     swapPointer(&a, &b);
//     cout<<"the new value of a is "<<a<<endl;
//     cout<<"the new value of b is "<<b<<endl;
//     ye jo abhi upar kara wo tha "call by refrence using pointers"
    
//     ye jo upar tha wo tha call by refrence using pointers 
//     ab apn karenge call by using c++ refrence variables.

// }

// void swaprefrencevar(int &a, int &b ){
//     int  temp = a;
//     a = b;
//     b = temp;
// }
// int main(){
//     int a = 4 , b =9;
//     // this time swapping with refrence varibales
//     cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<"\n";
//     // now swapping 
//     swaprefrencevar(a , b);
//     cout<<"the new value of a is "<<a<<"\n";
//     cout<<"the new value of b is "<<b<<"\n";
//     ab dekhte hai return refrence mtlb swapping ke time pe kissi ki value agr change karni ho toh.
//     toh upar void ki jagah int lagana hoga 
//     aur & lagana padega int ke baad aur return mai wo value dalne hogi jo change karni hai.

// }

int & swaprefrencevar(int &a, int &b){
    int temp = a;
    a = b;
    b= temp;
    return a;

}

int main(){
    int a =68 , b =78;
    cout<<"the value of a is "<<a<<"\n";
    cout<<"the value of b is "<<b<<"\n";
    swaprefrencevar( a , b ) = 999;
    cout<<"the new value of a is after changing also "<<a<<"\n";
    cout<<"the new value of b is "<<b<<"\n";


}