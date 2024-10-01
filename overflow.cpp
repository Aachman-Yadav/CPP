#include<bits/stdc++.h>
using namespace std;

int main(){
    // range of int is form -10^9 to 10^9
    //          long int is -10^12 to 10^12
    //  range of long long int is -10^18 to 10^18
    int a = 100000;
    int b = 100000;
    int c = a*b;
    cout<<c;
    // toh ye ab int ki range se bahar ho chuka hai toh garbage value dega
    // claculation hamesha higher data type mai hoti hai 
    // toh agr long int bana bhi diya c aur baki a aur b ko nahi banaya toh kaam nahi chalega.
}