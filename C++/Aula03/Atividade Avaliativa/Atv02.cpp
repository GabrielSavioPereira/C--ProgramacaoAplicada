#include <iostream>

using namespace std;

char VerificaNum(int num){
	if (num >0){
		return 'P';
	}
	return 'N';
	
}

int main(){
	setlocale(LC_ALL,"portuguese");
	int numero;
	
	cout<<"Digite um numero: ";
	cin>>numero;
	
	char resultado = VerificaNum(numero);
	
	cout <<"O resultado é : " <<resultado <<endl;
	
	return 0;
}
