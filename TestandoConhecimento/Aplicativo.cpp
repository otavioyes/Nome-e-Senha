#include "NomeEsenha.h"
#include "RegistrandoApp.h"


int main()
{
	//Objeto 
	NomeEsenha app;

	std::string nome, senha;


	std::cout << "Nome do App: ";
	std::getline(std::cin, nome);
	std::cout << (app.getNomeApp());

	std::cout << "Digite a senha: ";
	std::getline(std::cin, senha);

	//Cria o objeto RegistandoApp para manipular dados
	RegistrandoApp registrador;

	//popula o arquivo txt
	registrador.salvaNomeDoApp("nomeApp.TXT", app);
	registrador.salvaSenhaDoApp("senhaApp.TXT", app);

	//carrega os nomes e senhas do aplicativo 
	registrador.carregaNomeApp("nomeApp.TXT");
	registrador.carregaSenhaApp("senhaApp.TXT");

	return 0;
}




