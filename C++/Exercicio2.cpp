#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	float n1, n2;
	
	cout<< "Digite o primeiro numero: "	;
	cin>>n1;
	cout<<"Digite o segundo numero: ";
	cin>>n2;
	cout <<"\n";
	
	cout << "Soma: "<< n1 + n2 <<endl;
	cout << "Subtra��o: "<< n1 - n2 <<endl;
	cout << "Mutiplica��o: " << n1 * n2 <<endl;
	cout << "Divis�o: "<< n1/n2 << endl;
	return 0;
	
}
