#include <iostream>
#include <vector>

using namespace std;

int main(){
    int A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    if(A + B < C){
        cout << 1;
    }else if((A < B) && (B < C)){
        cout << 1;
    }else if((B < C) && (A == B)){
        cout << 2;
    }else if((A < B) && (B == C)){
        cout << 2;
    }else{
        cout << 3;
    }

}