#include<bits/stdc++.h>
using namespace std;

int main(){
    int a= 3, b = 4;
    cout<<(a==b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a!=b)<<endl;
    // logical operator jab dono condition ya jitni bhi conditons hai wo fulfill hongi toh 
    // hi true hoga
    cout<<((a==b) && (a<b))<<"\n";
    //jaise ye upar wala 1 conditon satisfy hui leken dusri nahi toh false dega 

    cout<<((a<b) && (a<=b))<<"\n";
    // ab jaise isme dono conditions satisy ho rhi hai toh true aaya "&&" ye tha and operator.
    // || ye or operatore hai isme agr koi ek bhi true toh true dega.
    cout<< ((a<b) || (a>=b))<<"\n";
    cout<< (!(a==b));
    // upar wala 'not' operator ulta result dega.
}
