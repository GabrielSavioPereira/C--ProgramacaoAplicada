#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int cod;
	cout <<"Digite o codigo do produto: ";
	cin >> cod;
	cout <<"\n";
	if (cod == 1){
		cout << "O produto � um alimento � n�o-perecivel";
	}else if (cod >=2 and cod <= 4){
		cout<<"O produto � um alimento1 perecivel";
	}else if (cod == 5 || cod == 6){
		cout<<"O produto � um vestuario";
	}else if (cod == 7){
		cout<<"O produto � de Higiene pessoal";
	}else if (cod >=8 and cod <=15){
		cout<<"O produtp � de Limpeza e Utens�lios Dom�sticos";
	}else {
		cout<<"Codigo inexistente";
	}
	return 0;
	

}

