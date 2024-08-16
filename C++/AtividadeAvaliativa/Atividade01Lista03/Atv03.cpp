#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int cod;
	cout <<"Digite o codigo do produto: ";
	cin >> cod;
	cout <<"\n";
	if (cod == 1){
		cout << "O produto é um alimento é não-perecivel";
	}else if (cod >=2 and cod <= 4){
		cout<<"O produto é um alimento1 perecivel";
	}else if (cod == 5 || cod == 6){
		cout<<"O produto é um vestuario";
	}else if (cod == 7){
		cout<<"O produto é de Higiene pessoal";
	}else if (cod >=8 and cod <=15){
		cout<<"O produtp é de Limpeza e Utensílios Domésticos";
	}else {
		cout<<"Codigo inexistente";
	}
	return 0;
	

}

