#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> hab;
    int aux;

    for(int i = 0; i < 4; i++){
        cin >> aux;
        hab.push_back(aux);
    }

    sort(hab.begin(), hab.begin()+4);

    cout << abs((hab[0]+hab[3]) - (hab[2]+hab[1]));
}