#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;
    
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if((n1 < n2) && (n1 < n3)){
        if(n2 < n3){
            cout << 1 << endl << 2 << endl << 3;
        }else{
            cout << 1 << endl << 3 << endl << 2;
        }
    }else if((n2 < n1) && (n2 < n3)){
        if(n1 < n3){
            cout << 2 << endl << 1 << endl << 3;
        }else{
            cout << 2 << endl << 3 << endl << 1;
        }
    }else if((n3 < n1) && (n3 < n2)){
        if(n1 < n2){
            cout << 3 << endl << 1 << endl << 2;
        }else{
            cout << 3 << endl << 2 << endl << 1;
        }
    }

    return 0;
}