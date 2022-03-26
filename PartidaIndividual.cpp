#include "PartidaIndividual.h"

    PartidaIndividual::PartidaIndividual(){}

    PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, Jugador* jugador, bool continuaPartidaAnterior):Partida(fecha, duracion, jugador){
    this->continuaPartidaAnterior = continuaPartidaAnterior;
    }

    bool PartidaIndividual::getContinuarPartidaAnterior(){
        return this->continuaPartidaAnterior;
    }

    void PartidaIndividual::setContinuarPartidaAnterior(){
        this->continuaPartidaAnterior = continuaPartidaAnterior;
    }

    PartidaIndividual::~PartidaIndividual(){}

    int PartidaIndividual::darTotalHorasParticipantes(int a){
        return a;
        //que se pasaria como parametro? la fecha y la duracion para sumarlas?
    }