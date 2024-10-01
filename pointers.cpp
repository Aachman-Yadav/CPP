#include<bits/stdc++.h>
using namespace std;

int main(){
    //pointer basically ek datatype hi hai jo dusre 
    // datatype ki location batat hai 
    int a = 3;
    int* b = &a; 
    // & jo hai wo address store kar rha hai mtlb jaha memory mai 
    // wo stored hai waha 
    cout<<b<<"\n"<<"\n";
    // b ko cout karne mai par 0x61ff08 ye aaya niche toh 
    // yahi address hai jisme wo saved hai.

    // dereference operator "*" ye address pe value dega mtlb eg. hai niche 
    // mtlb bascially value at operator.
    cout<<*b<<endl<<endl;
    

    // ab pointer to pointer ki baat pe aaye 
    // toh jaise upar b hai uska bhi toh kuch address hoga toh eg. below
    int** c = &b;
    cout<<"the address of b is"<<&b<<"\n";
    cout<<"the address of b is"<<c<<endl<<endl;
    cout<<"the value of address c"<<*c<<"\n";
    cout<<"the value at address at address of c"<<**c<<"\n\n";
    // doubel star se 2 baar derefrence kiya toh phele star mai 'b' diya aur dusre star mai b ki value de di
}