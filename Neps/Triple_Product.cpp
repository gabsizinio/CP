#include <iostream>

using namespace std;

int main(){
    long long int N, aux;

    cin >> N;

    long long int vetor[N];

    for(long long int i = 0; i < N; i++){
        cin >> aux;
        vetor[i] = aux;
    }

    long long int res[N-2] = {};

    for(long long int i = 0; i < N-2; i++){
        if(vetor[i] < 0 && vetor[i+1] < 0){
            res[i] = vetor[i] * vetor[i+1] * vetor[N-1];
        }else{
            res[i] = vetor[i] * vetor[i+1] * vetor[i+2];
        }
    }

    long long int maior = 0;
    for(long long int i = 0; i < N-2; i++){
        if(res[i] > maior){
            maior = res[i];
        }
    }
    
    cout << maior;
}