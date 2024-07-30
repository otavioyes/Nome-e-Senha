#include "CadastrandoDados.h"

void cadastrandoDados(RegistrandoApp& registrando)
{
	std::string nome, senha;


	std::cout << "Digite o nome do aplicativo: ";
	std::getline(std::cin, nome);

	std::cout << "Crie uma senha: ";
	std::getline(std::cin, senha);

	NomeEsenha dados(nome, senha);
	registrando.salvaNomeDoApp(dados);
	registrando.salvaSenhaDoApp(dados);
}
