#pragma once
#include "NomeEsenha.h"

#include <vector>
#include <fstream>
#include <iostream>
#include <exception>


class RegistrandoApp
{
private:
	std::vector <NomeEsenha> dadosApp;

public:
	//Armazena nome e senha do App em aruivo txt
	void salvaNomeDoApp(const std::string nomeAppTxt, const NomeEsenha& nomeEsenha);
	void salvaSenhaDoApp(const std::string senhaAppTxt, const NomeEsenha& nomeEsenha);

	//Carrega nome e senha do app
	void carregaNomeApp(const std::string& nomeAppTxt);
	void carregaSenhaApp(const std::string& senhaAppTxt);
};

