#include <iostream>

using namespace std;

int main(){
    int Ia, Ib, Fa, Fb;
    cin >> Ia >> Ib >> Fa >> Fb;

    if(Ib == Fb){
        if(Ia == Fa){
            cout << 0;
        }else{
            cout << 1;
        }
    }else{
        if(Ia == Fa){
            cout << 2;
        }else{
            cout << 1;
        }
    }
}