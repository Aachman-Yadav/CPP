#include<bits/stdc++.h>
using namespace std;
int sum(int a, int b){
    // a and b will be taking values from the actual parametres num1 and num2.
    int c = a+b;
    return c;
}
void g ();

int main(){
    int num1, num2;
    cout<<"enter num1"<<endl;   
    cin>>num1;
    cout<<"enter num2"<<"\n";
    // num1 and num2 are the actual parametres.
    cin>>num2;
    cout<<"the sum is "<<sum(num1, num2);
    g();
}
void g(){
    cout<<"\n hello, Good morning ";
}