#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 34;
    cout<<a<<"\n";
    a = 67 ;
    cout<<a<<"\n";
    // toh jaise upar agr int ki value change kari maine toh wo change ho gyi
    // agr ab aise kissi value ko constant rakhna ho toh --> for eg.
    const int b = 23;
    // ab ye b constant ho gya change nahi hoga
    // ab aate hai manipulators jaise endl hota hai 
    // waise hi setw hota hai setw ka use dikha deta hu 

    int f=45, d=56, c=76;
    cout<<"without setw "<<"\n"<<f<<"\n"<<d<<"\n"<<c<<"\n";
    cout<<"with setw"<<"\n"<<setw(7)<<f<<endl;
    cout<<setw(7)<<d<<endl;
    cout<<setw(7)<<c<<endl;
    // jaise isme maine 7 likha toh usne 7 letters ki space mai no. print kiya 


}