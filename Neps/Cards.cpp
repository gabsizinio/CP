#include <iostream>
#include <vector>

using namespace std;

int main(){
    int aux;
    vector<int> cards;
    for(int i = 0; i < 3; i++){
        cin >> aux;
        cards.push_back(aux);
    }
    if (cards[0] == cards[1]){
        cout << cards[2];
    }else if (cards[0] == cards[2]){
        cout << cards[1];
    }else{
        cout << cards[0];
    }
}