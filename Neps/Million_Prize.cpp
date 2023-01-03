#include <iostream>

using namespace std;

int main(){
	int som = 0, aux, i, boo = false;
	int tam;
	cin >> tam;
	for(int k = 0; k < tam; k++){
		cin >> aux;
		som += aux;
		if((som >= 1000000) && (boo == false)){
			i = k; 
			boo = true;
		}
	}
	cout << i+1;

	return 0;

}
