#include <iostream>

int main(){
	int n1,n2,n3;
	std::cout <<"Digite a primeira nota do aluno: ";
	std::cin >> n1;
	std::cout <<"Digite a segunda nota do aluno: ";
	std::cin >> n2;
	std::cout <<"Digite a terceira nota do aluno: ";
	std::cin >> n3;
	float media =(n1 + n2 + n3)/3;
	std::cout <<"\n                                                                                                                                                                                    ";
	if (media >=6){
		std::cout <<"O Aluno Passou com media: "<<media;
		}else{
			std::cout<<"O Aluno reprovou com media"<<media;
		}
	
}
