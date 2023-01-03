#include <iostream>

using namespace std;

int main(){
    int A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    int P1, P2, P3;

    P1 = 2*B + 4*C;
    P2 = 2*A + 2*C;
    P3 = 4*A + 2*B;

    if((P1 <= P2) && (P1 <= P3)){
        cout << P1;
    }else if((P2 <= P1) && (P2 <= P3)){
        cout << P2;
    }else if((P3 <= P1) && (P3 <= P2)){
        cout << P3;
    }
    return 0;
}