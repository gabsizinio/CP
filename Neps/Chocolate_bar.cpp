#include <iostream>

using namespace std;

int main(){
    int N, x1, y1, x2, y2;
    bool var = false;

    cin >> N;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    if(!(((x1 > N/2) && (x2 > N/2)) || ((x1 <= N/2) && (x2 <= N/2)))){
        var = true;
    }else if(!(((y1 > N/2) && (y2 > N/2)) || ((y1 <= N/2) && (y2 <= N/2)))){
        var = true;
    }

    if(var == false){
        cout << "N";
    }else{
        cout << "S";
    }

    return 0;
}