#include <iostream>

using namespace std;

int main(){
    int n, aux; 
    cin >> n;

    int res[n] = {};

    for(int i = 0; i < n; i++){
        cin >> aux;
        res[i] = aux;
    }

    int jog[12] = {};

    for(int i = 0; i < n; i++){
        int pos = res[i] - 1;
        jog[pos]++;
    }

    int maior = 0;
    for(int i = 0; i < 12; i++){
        if(jog[i] > maior){
            maior = jog[i];
        }
    }


    for(int i = 0; i < 12; i++){
        if(jog[i] == maior){
            cout << i + 1 << " ";
        }
    }
    
}