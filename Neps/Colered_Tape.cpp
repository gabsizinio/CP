#include <iostream>
#include <vector>

using namespace std;

vector <int> zero;
int n;

int main(){
    cin >> n;

    zero.push_back(-999999999);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x == 0) zero.push_back(i);
    }
    zero.push_back(999999999);

    /*
    Criamos um vector com as posições dos 0's, considerando que
    eles também estão em + e - infinito
    */

    for(int i=0, j = 0; i<n; i++){
        if(zero[j+1] == i) j++;

        cout << min(9, min(abs(zero[j]-i), abs(zero[j+1]-i))) << " ";
    }
    cout << "\n";

    /*
    Garantimos que zero[j] vai ser o 0 mais a esquerda da posição i,
    pois, ao i chegar no próximo 0 da posição j, então a partir de 
    i+1, o 0 mais a esquerda estará em j+1, por isso incrementamos.

    Depois, calculamos a distância entre o 0 mais a esquerda e mais 
    a direita de i, fazendo o módulo da subtração, entre a posição
    do 0 mais a esquerda (zero[j]) e do mais a direita (zero[j+1]).
    Com o resultado sendo o mínimo entre isso e 9.
    */

    return 0;
}