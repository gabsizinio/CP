#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if((A == B) && ((A != C) || (B != C))){
        cout << "C";
    }else if((A == C) && ((A != B) || (C != B))){
        cout << "B";
    }else if((B == C) && ((B != A) || (C != A))){
        cout << "A";
    }else{
        cout << "*";
    }

    return 0;
}