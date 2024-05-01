#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeroTotal, x, soma = 0, ultimoNumero;

    cout << "Quantos n�meros ser�o digitados? " << endl;
    cin >> numeroTotal;

    if(numeroTotal <= 0) {
    cout << "Por favor, insira um n�mero v�lido maior que zero." << endl;
    return 1;
    }
    
    for (int i = 0; i < numeroTotal; i++) { 
        cout << "Digite o " << (i + 1) << "� n�mero: " << endl;
        cin >> x; 

    if(cin.fail()) {
        cout << "Entrada inv�lida. Por favor, insira um n�mero." << endl;
        return 1;
    }
        soma += x;

    if (i == numeroTotal - 1) {
        ultimoNumero = x;
    }
    }

    cout << "O resultado da soma �: " << soma << endl;

    if (ultimoNumero != 0) {
        cout << "O resultado da divis�o da soma pelo �ltimo n�mero �: " << static_cast<double>(soma) / ultimoNumero << endl;
    } else {
        cout << "N�o � possivel dividir por zero." << endl;
    }

    return 0;
}
