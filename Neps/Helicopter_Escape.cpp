#include <iostream>

using namespace std;

int main(){
    int F, H, P;
    int dir;

    int vet[15] = {};

    cin >> H >> P >> F >> dir;

    bool var = false;

    while(true){
        if(F == 16 && dir == 1){
            F = 0;
        }
        if(F == -1 && dir == -1){
            F = 15;
        }

        if(F == H){
            var = true;
            break;
        }

        if(F == P){
            break;
        }

        if(dir == 1){
            F++;
        }
        if(dir == -1){
            F--;
        }
    }

    if(var == true){
        cout << "S";
    }else{
        cout << "N";
    }
}