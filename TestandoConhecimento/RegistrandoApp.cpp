#include "RegistrandoApp.h"

void RegistrandoApp::salvaDados(const std::string& appTxt, const NomeEsenha& nomeEsenha) {
    try {
        std::ofstream abreArq(appTxt, std::ios::app);
        if (!abreArq.is_open()) {
            throw std::ios_base::failure("Erro ao abrir arquivo de escrita");
        }
        abreArq << nomeEsenha.getNomeApp() << " " << nomeEsenha.getSenhaApp() << '\n';
        abreArq.close();
        std::cout << "Dados do app salvo com sucesso! Caminho: " << appTxt << '\n';
    }
    catch (const std::exception& excep) {
        std::cerr << "Erro ao salvar dados do app: " << excep.what() << '\n';
    }
}

void RegistrandoApp::carregaDados(const std::string& dadosTxtApp) {
    try {
        std::ifstream noArquivo(dadosTxtApp);
        if (!noArquivo.is_open()) {
            throw std::ios_base::failure("Erro ao abrir o arquivo para leitura.");
        }
        std::cout << "Arquivo carregado com sucesso! Caminho: " << dadosTxtApp << '\n';

        std::string nomeApp, senhaApp;
        while (noArquivo >> nomeApp >> senhaApp) {
            NomeEsenha dados(nomeApp, senhaApp);
            dadosApp.push_back(dados);
            std::cout << "Nome do aplicativo: " << nomeApp << ", senha: " << senhaApp << '\n';
        }
        noArquivo.close();
    }
    catch (const std::exception& e) {
        std::cerr << "Erro ao carregar os dados do aplicativo: " << e.what() << '\n';
    }
}