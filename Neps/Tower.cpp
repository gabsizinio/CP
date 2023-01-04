#include <iostream>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int tab[n][n];

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cin >> tab[i][k];
        }
    }


    int somaL[n] = {};
    int somaC[n] = {};

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            somaL[i] += tab[i][k];
        }
    }
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            somaC[i] += tab[k][i];
        }
    }

    int maior = 0;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            int res = somaL[i] + somaC[k] - (2*tab[i][k]);
            if(res > maior){
                maior = res;
            }
        }
    }
    cout << maior;
}