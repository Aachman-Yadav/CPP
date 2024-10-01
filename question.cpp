#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N, X, Y;
        cin>>N>>X>>Y;
        if (((X*N) % Y) == 0 && Y > X){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
