#include<bits/stdc++.h>
using namespace std;
float moneyreceived(int currentmoney , float factor = 1.06){
    return currentmoney * factor;
}
inline int product(int a, int b){
    return a*b;
}

int main(){
    int a , b;
cout<<"enter the value of a and b"<<endl;
cin>>a>>b;
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
cout<<"the product of a and b is "<<product(a, b);
// ab inline function ye bascislly agr bahut saare output nikalne ho ek hi function ke 
// toh bs time ko kum kar deta hai leken ye memory bahut use karta hai .
// mtlb product toh same rahega leken bs ye samhjho ki wo saare product ek sath chala dega
// jaise ye itne saare hai upar leken jab int product ke phele inline laga dunga toh sab ek sath ruhn honge.
// leken wahi agr bade program ko agr inline bana diya toh cache bahut zyada occupy kar lega.
// static int function ye ek baar intization karega phir value jo phele wali rahegi wo bhaad mai jayegi.
// next time value of function will be retained
int money = 1000000;
cout<<"the current money is \n"<<money<<"the amount obtained after intrest "<<moneyreceived(money)<<endl<<"is the money recieved after 1 year";

}
