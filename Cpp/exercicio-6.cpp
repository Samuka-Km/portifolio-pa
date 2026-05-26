#include <iostream>
using namespace std;

int main() {

    int soma = 0;
    int produto = 1;
    int numero;

    while (soma <= 100) {

        cout << "Digite um numero: ";
        cin >> numero;

        soma = soma + numero;
        produto = produto * numero;
    }

    cout << "Produto: " << produto << endl;

    return 0;
}
