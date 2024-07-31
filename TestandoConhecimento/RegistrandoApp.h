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
	void salvaDados(const std::string& appTxt, const NomeEsenha& nomeEsenha);

	//Carrega nome e senha do app
	void carregaDados(const std::string& dadosTxtApp);
	
};
	
