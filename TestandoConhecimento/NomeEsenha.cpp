#include "NomeEsenha.h"


NomeEsenha::NomeEsenha() : nomeApp(""), senhaApp("") {};

NomeEsenha::NomeEsenha(const std::string& nomeApp,
						const std::string& senhaApp) : 
						nomeApp(nomeApp),
						senhaApp(senhaApp) {}


std::string NomeEsenha::getNomeApp() const { return nomeApp; }

std::string NomeEsenha::getSenhaApp() const { return senhaApp; }

void NomeEsenha::setNomeApp(const std::string& nomeApp) { (*this).nomeApp = nomeApp; }

void NomeEsenha::setSenhaApp(const std::string& senhaApp) { (*this).senhaApp = senhaApp; }

std::vector<std::string> NomeEsenha::salvaNomeDoApp(std::string& nomeApp)
{

	std::vector<std::string> armazenaNome;
	armazenaNome.push_back(nomeApp);
}


