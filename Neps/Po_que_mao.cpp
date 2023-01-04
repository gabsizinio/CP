#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, aux;
    cin >> n;

    vector <int> val;

    for(int i = 0; i < 3; i++){
        cin >> aux;
        val.push_back(aux);
    }

    sort(val.begin(), val.begin()+3);

    int som = 0, ind = 3;

    for(int i = 0; i < 3; i++){
        som += val[i];
        if(som > n){
            ind = i;
            break;
        }
    }

    cout << ind;

}