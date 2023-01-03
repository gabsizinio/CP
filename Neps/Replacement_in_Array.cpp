#include <iostream>

using namespace std;

int main(){
    int aux;
    int vet[10];

    for(int i = 0; i < 10; i++){
        cin >> aux;
        vet[i] =  aux;
    }


    int menor = 1000;
    for(int k = 0; k < 10; k++){
        if(vet[k] < menor){
            menor = vet[k];
        }
    }

    cout << "Menor: " << menor << endl;
 
    int oco[10];
    int ind = 0;

    for(int j = 0; j < 10; j++){
        if(vet[j] == menor){
            oco[ind] = j;
            ind++;
        }
    }

    cout << "Ocorrencias: ";
    for(int m = 0; m < ind; m++){
        cout << oco[m] << ' ';
    }

    cout << endl;

    for(int l = 0; l < 10; l++){
        if(vet[l] == menor){
            vet[l] = -1;
        }
        cout << vet[l] << " ";
    }

}