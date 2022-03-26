#include "DtPartidaIndividual.h"

    DtPartidaIndividual::DtPartidaIndividual(){}
    
    DtPartidaIndividual::DtPartidaIndividual(DtFechaHora * fecha, int duracion, bool continuaPartidaAnterior){
        this->fecha=fecha;
        this->duracion=duracion;
        this->continuaPartidaAnterior=continuaPartidaAnterior;
    }

    bool DtPartidaIndividual::getContinuarPartidaAnterior(){
        return continuaPartidaAnterior;
    }

    DtPartidaIndividual::~DtPartidaIndividual(){}
