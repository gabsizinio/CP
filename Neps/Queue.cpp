#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, aux;
    cin >> n;

    vector <int> fila;

    for(int i = 0; i < n; i++){
        cin >> aux;
        fila.push_back(aux);
    }

    int sa;
    cin >> sa;

    for(int i = 0; i < sa; i++){
        cin >> aux;
        int k;
        bool var = false;
        for(k = 0; k < fila.size(); k++){
            if(aux == fila[k]){
                var = true;
                break;
            }
        }
        if(var){
            fila.erase(fila.begin()+k);
        }
    }

    for(int x : fila){
        cout << x << " ";
    }

}