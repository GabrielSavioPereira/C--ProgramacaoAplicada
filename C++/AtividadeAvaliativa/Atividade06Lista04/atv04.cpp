#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	for (int i = 0; i<50; ++i){
		if (not (i %2 ==0)){
			cout << i<<endl;
		}

	}
	return 0;
		
}	
