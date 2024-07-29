#include "NomeEsenha.h"
#include "RegistrandoApp.h"

void RegistrandoApp::salvaNomeDoApp(const std::string nomeAppTxt, const NomeEsenha& nomeEsenha)
{
	try
	{
		std::ofstream abreArq(nomeAppTxt);
		if (!abreArq.is_open()) {
			throw std::ios_base::failure("Erro ao abrir arquivo de escrita");
		} abreArq << nomeEsenha.getNomeApp();
		abreArq.close();
		std::cout << "Nome do app salvo com sucesso! " << '\n';
	} catch (const std::exception& excep){
		std::cerr << "Erro ao salvar nome do app: " << excep.what() << '\n';
	}
}


void RegistrandoApp::salvaSenhaDoApp(const std::string senhaAppTxt, const NomeEsenha& nomeEsenha)
{
	try
	{
		std::ofstream abreArq(senhaAppTxt);
		if (!abreArq.is_open()) {
			throw std::ios_base::failure("Erro ao abrir o arquivo de escrita");
		}abreArq << nomeEsenha.getSenhaApp();
		abreArq.close();
	} catch (const std::exception& excep) {
		std::cerr << "Erro ao salvar a senha do app: " << excep.what() << '\n';
	}
}

void RegistrandoApp::carregaNomeApp(const std::string& nomeAppTxt)
{
	try {
		std::ifstream noArquivo(nomeAppTxt);
		if (!noArquivo.is_open()) {
			throw std::ios_base::failure("Erro ao abrir o arquivo para leitura.");
		}std::string nomeApp;
		std::getline(noArquivo, nomeApp);
		noArquivo.close();
		std::cout << "Nome do aplicativo carregado com sucesso: " << nomeApp << '\n';
	}
	catch (const std::exception& e) {
		std::cerr << "Erro ao carregar o nome do aplicativo: " << e.what() << '\n';
	}
}

void RegistrandoApp::carregaSenhaApp(const std::string& senhaAppTxt)
{
	try
	{
		std::ifstream noArq(senhaAppTxt);
		if (!noArq.is_open()) {
			throw std::ios_base::failure("Erro ao abrir o arquivo de leitura.");
		}std::string senhaApp;
		std::getline(noArq, senhaApp);
		noArq.close();
		std::cout << "Senha salva com sucesso! " << senhaApp << '\n';
	}
	catch (const std::exception& excep){
		std::cerr << "Erro ao salvar a senha do aplicativo: " << excep.what() << '\n';
	}
}


