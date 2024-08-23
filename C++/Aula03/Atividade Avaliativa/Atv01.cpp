#include <iostream>

using namespace std;

int Soma(int a, int b, int c);

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1,num2,num3;

	cout << "Digite o primeiro numero: ";
	cin >> num1; 
	cout << "Digite o segundo numero: ";
	cin >> num2; 
	cout << "Digite o terceiro numero: ";
	cin >> num3; 
	
	int resultado = Soma(num1, num2, num3);
    cout << "A soma dos numeros é " << resultado << endl;
    
    return 0;
}
	
 int Soma(int a,int b, int c){
 	return a + b + c;
 }


