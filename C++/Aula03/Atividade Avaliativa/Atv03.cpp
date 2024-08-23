#include <iostream>

using namespace std;

bool Ordem(int a, int b, int c) {
    return (a < b) && (b < c);
}

int main() {
    int num1, num2, num3;
    
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    cout << "Digite o terceiro numero: ";
    cin >> num3;
    
    bool resultado = Ordem(num1, num2, num3);
    
    if (resultado) {
        cout << "Os numeros estao ordenados em ordem crescente." << endl;
    } else {
        cout << "Os numeros nao estao ordenados em ordem crescente." << endl;
    }
    
    return 0;
}
