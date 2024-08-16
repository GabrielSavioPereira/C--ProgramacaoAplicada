#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	float salario, novoSalario;
	cout << ("Digite seu salario: ");s
	cin >> salario;
	cout << "\n";
	if (salario <= 280) {
		float aumento = ( salario * 0.2  ) ;
		novoSalario =(aumento + salario);
		cout << "Seu salario antes do reajuste era de : "<< salario<<endl;
		cout << "O seu percentual de aumento aplicado é de 20%"<< endl;
		cout << "O valor que você irá receber é de: "<<aumento<<endl;
		cout<<	"O novo salario é de: "<<novoSalario<<endl;
	}else if (salario >280 and salario < 700 ){
		float aumento = ( salario * 0.15  ) ;
		novoSalario =(aumento + salario);
		cout << "Seu salario antes do reajuste era de : "<< salario<<endl;
		cout << "O seu percentual de aumento aplicado é de 15%"<< endl;
		cout << "O valor que você irá receber é de: "<<aumento<<endl;
		cout<<	"O novo salario é de: "<<novoSalario<<endl;
	}else if (salario >700 and salario <1500){
		float aumento = ( salario * 0.10  ) ;
		novoSalario =(aumento + salario);
		cout << "Seu salario antes do reajuste era de : "<< salario<<endl;
		cout << "O seu percentual de aumento aplicado é de 10%"<< endl;
		cout << "O valor que você irá receber é de: "<<aumento<<endl;
		cout<<	"O novo salario é de: "<<novoSalario<<endl;
	}else if (salario >=1500){
		float aumento = ( salario * 0.05  ) ;
		novoSalario =(aumento + salario);
		cout << "Seu salario antes do reajuste era de : "<< salario<<endl;
		cout << "O seu percentual de aumento aplicado é de 5%"<< endl;
		cout << "O valor que você irá receber é de: "<<aumento<<endl;
		cout<<	"O novo salario é de: "<<novoSalario<<endl;
	}
	return 0;

}
