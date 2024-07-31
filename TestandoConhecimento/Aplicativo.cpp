#include "NomeEsenha.h"
#include "RegistrandoApp.h"
#include <iostream>


int main()
{
	RegistrandoApp registrador;

	std::string nome, senha;

	std::cout << "Nome do App: ";
	std::getline(std::cin, nome);
	

	std::cout << "Digite a senha: ";
	std::getline(std::cin, senha);

	NomeEsenha app(nome, senha);

	registrador.salvaDados("dadosApp.txt" , app);

	registrador.carregaDados("dadosApp.txt");
	

	return 0;
}

