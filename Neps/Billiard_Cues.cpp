#include <iostream>
#include <set>

using namespace std;

int main(){
    set <int> tacos;
    int n, aux, som = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        if(tacos.find(aux) != tacos.end()){
            tacos.erase(aux);
        }else{
            som += 2;
            tacos.insert(aux);
        }
    }

    cout << som;
}