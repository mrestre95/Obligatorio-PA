#include "DtPartidaMultiJugador.h"

    DtPartidaMultiJugador::DtPartidaMultiJugador(){}

    DtPartidaMultiJugador::DtPartidaMultiJugador(DtFechaHora * fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes){
        this->fecha=fecha;
        this->duracion=duracion;
        this->trasmitidaEnVivo=trasmitidaEnVivo;
        this->cantParticipantes=cantParticipantes;
    }

    bool DtPartidaMultiJugador::getTrasmitidaEnVivo(){
        return this->trasmitidaEnVivo;
    }

    int DtPartidaMultiJugador::getCantParticipantes(){
        return this->cantParticipantes;
    }

    DtPartidaMultiJugador::~DtPartidaMultiJugador(){}
