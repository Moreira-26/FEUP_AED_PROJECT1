//
// Created by jpedr on 12/12/2021.
//

#ifndef PROJECT_AEROPORTO_H
#define PROJECT_AEROPORTO_H

#include <list>
#include "aviao.h"
#include "defs.h"
#include "menus.h"
#include "input.h"


struct inputStruct{
    inputStruct(string m, int c){matricula = m; capacidade = c;};

    string matricula;
    int capacidade;
};


class Aeroporto {
    list<Aviao> avioes;

public:
    void TratarVoos(Aviao &aviao);
    void TratarServicos(Aviao &aviao);
    void showAvioes();
    void verVoo(Aviao& aviao);
    int inputNumVoo(Aviao& aviao);
    void verBilhete(Voo& voo);
    void removerBilhete(Voo& voo);
    void mostrarServicoRealizar(Aviao& aviao);
    void mostrarServicosCompletos(Aviao& aviao);
    void criarServicoRealizar(Aviao& aviao);
    void realizarServico(Aviao& aviao);
    list<Aviao>& getAvioes();
    Aviao& procurarAviao();
    inputStruct inputMatriculaCapacidade();
    void addAviao(string matricula, int c);
    void removeAviao();
    void comprarBilhetes();
    void alterarAviao(Aviao& aviao);
    void criarVoo(Aviao& aviao);
    void deleteVoo(Aviao& aviao);
    void ordenarVoos(Aviao& aviao);
    Passageiro criarPassageiro();
    void run();

};


#endif //PROJECT_AEROPORTO_H
