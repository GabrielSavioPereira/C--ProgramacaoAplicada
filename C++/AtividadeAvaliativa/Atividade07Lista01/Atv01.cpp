#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	float altura,peso;
	char sexo;
	cout << "Digite sua altura: ";
	cin >> altura;
	cout << "Digite seu sexo 'M' ou 'F' ";
	cin >> sexo;
	sexo = toupper(sexo);
	if (sexo == 'M'){
		peso = ((altura * 72.7) - 58);
		cout << "Seu peso ideal é  "<< peso;
	}else if (sexo == 'F'){
		peso = ((altura * 62.1 ) - 44.7);
		cout << "Seu peso ideal é  "<< peso;
	}
	return 0;	
}
