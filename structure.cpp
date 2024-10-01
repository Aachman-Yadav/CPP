#include<bits/stdc++.h>
using namespace std;
// structure dusre datatypes ko combine karne mai help karta hai
// struct bascially aisa user defines datatype jisme bahut saare alag alag data type ho
typedef struct employee
{
    int eId ;
    char favchar ; 
    float salary;

}ep;
// ab aate hai union pe wo bhi struct jaisa hi hai bs ek baar mai ek hi datatype use kar payoge.
union money{
      int rice;
      char car;
      float pounds;
};
int main(){
    union money lo;
    lo.rice = 355;
    lo.car = 'c'; 
    // ek baar mai ek hi dega union agr koi dusra laya toh garbage value de dega.
    cout<<lo.car;
    cout<<"\n\n";
    ep Aachman;
    Aachman.eId = 1;
    Aachman.favchar = 'a';
    Aachman.salary = 240000000;
    cout<<Aachman.salary<<"\n"<<Aachman.favchar<<"\n"<<Aachman.eId;
    cout<<"\n";

    enum meal{breakfast, lunch, dinner};
    // ab meal ek datatype ban gya uske bhi use kar skate hai jaise eg. below 
        meal m1 = lunch;
        cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

}