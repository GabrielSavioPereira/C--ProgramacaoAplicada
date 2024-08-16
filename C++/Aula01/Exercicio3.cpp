#include <iostream>

using namespace std;

int main(){
	double celsius;
	double fahrenheit;
	
	cout <<"Digite a temperatura em graus Celsius: ";
	cin>>celsius;
	
	fahrenheit = celsius *9 /5 +32;
	
	cout<<"Temperatura em fahrenheit é de: "<<fahrenheit << endl;
	
	return 0;
}
