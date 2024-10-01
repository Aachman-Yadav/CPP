#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Tell your age";
    cin>>age;
//     if((age<18) && (age>0)){
//         cout<<"You are a kid, not allowed in the party";
//     }
//     else if(age<1){
//         cout<<"You are not even born yet";
//     }
//     else if(age==18){
//         cout<<"You can come in party with the kid's pass";
//     }
//     else{
//         cout<<"You are allowed in the party";
//     }
    // ye selection structure tha ab selection control structure dekhte hai if, else-if , else ladder.
    // selction control structure switch case.
    switch (age)
    {
     case 18:
     cout<<"you are 18"<<"\n";
     break;
     case 22:
     cout<<"you are 22"<<"\n";
     break;

     case 2:
     cout<<"you are 2"<<"\n";
     break;

     default:
     cout<<"No special case"<<"\n";
     break;
    }  

}