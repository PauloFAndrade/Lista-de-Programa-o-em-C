#include <iostream>
using std::cin;
using std::cout;
#include <algorithm>
using std::min;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int cont=0;
	for(int i{0};i<5;i++){
		int x;
		cin >> x;
		if(x<0){
			cont++;		  	
		}
	}
	cout << cont;
    return 0;
}
