#include <iostream>
using namespace std;

int main() {
	int qnt;
	float soma = 0;
	float altura;
	
	
	cout << "Quantidade de Pessoas: ";
	cin >> qnt;
	
	for (int i = 1; i <= qnt ; i++) {
		cout << "\n Altura pessoa " << i << " : ";
		cin >> altura;
		
		soma = soma + altura ;
	}
	
	
	cout << "Media das alturas: " << soma / qnt ;
    return 0;
}
