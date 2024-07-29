#include "NomeEsenha.h"
#include "RegistrandoApp.h"


int main()
{
	//Objeto 
	NomeEsenha app;

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




