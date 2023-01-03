#include <iostream>

using namespace std;

int main(){
    int N, aux; 
    cin >> N;

    int somL[N] = {};
    int somC[N] = {};
    int diagonal_principal = 0;
    int diagonal_secundaria = 0;


    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            cin >> aux;

            somL[i] += aux;
            somC[k] += aux;

            if(i == k){
                diagonal_principal += aux;
            }

            if(i+k == N-1){
                diagonal_secundaria += aux;
            }
        }
    }

    bool var = true;

    if(diagonal_principal != diagonal_secundaria){
        var = false;
    }

    for(int i = 0; i < N; i++){
        if(diagonal_principal != somL[i] || diagonal_secundaria != somC[i]){
            var = false;
        }
    }

    if(var){
        cout << diagonal_principal;
    }else{
        cout << -1;
    }


}