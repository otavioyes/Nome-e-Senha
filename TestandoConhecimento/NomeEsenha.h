#pragma once
#include <string>


class NomeEsenha
{
private:
	std::string nomeApp;
	std::string senhaApp;

public:
	NomeEsenha();
	NomeEsenha(const std::string& nomeApp, const std::string& senhaApp);

	std::string getNomeApp() const;
	std::string getSenhaApp() const;

	void setNomeApp(const std::string& nomeApp);
	void setSenhaApp(const std::string& senhaApp);
};