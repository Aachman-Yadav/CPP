#include<bits/stdc++.h>
using namespace std;

int main(){
    // bahut saare variables ke kaam ko kum mai karne ke liye array use hota hai 
    // bascially bs memory assign hoti hai toh bahut saare chizo ko ek sath store kar leta hai
    // aur ek chiz yaad rakhna ki c++ mai counting hamesha 0 se start hoti hai.
    // array example.
    int marks[] = {46 ,78, 99, 23,};
    cout<<marks[0]<<"\n";
    cout<<marks[1]<<"\n";
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl<<"the math marks are-->"<<"\n";
    int mathmarks[4];
    mathmarks[0] = 234;
    mathmarks[1] = 124;
    mathmarks[2] = 345;
    mathmarks[3] = 2345;
    cout<<mathmarks[0]<<endl;
    // you can change the value of arrays
    mathmarks[2] = 679;
    cout<<mathmarks[2]<<endl;

    for(int i =0 ; i<4 ; i++){
        cout<<"the value of marks "<<i<<" is "<<mathmarks[4]<<endl;
    }
    cout<<endl;
    int j = 0;
    while(j<4){
        cout<<"the marks is"<<j<<marks[j]<<endl;
        j++;
    }
    cout<<"\n \n ";
    int k = 0 ;
    do{
        cout<<"the value of marks "<<k<<" is  "<<marks[k]<<endl;
        k++; 
    }while(k < 4);
    // pointers and arrays
    // "ARRAY POINTER KI BAAT" & nahi lagega iske array ki pointer ke liye 
    // very imp pointer atirhmetic ==>> address(new) = address (current) + i * size of datatype.
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    // cout<<"the value of marks[0]"<<*p<<endl;
    // cout<<"the value of marks[1]"<<*(p+1)<<endl;
    // cout<<"the value of marks[2]"<<*(p+2)<<endl;
    // cout<<"the value of marks[3]"<<*(p+3)<<endl;

    
}