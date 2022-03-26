#include "PartidaMultiJugador.h"

    PartidaMultiJugador::PartidaMultiJugador(){}

    PartidaMultiJugador::PartidaMultiJugador(DtFechaHora* fecha, int duracion, Jugador * jugador, bool trasmitidaEnVivo, int cantParticipantes):Partida(fecha, duracion, jugador){
        this->trasmitidaEnVivo = trasmitidaEnVivo;
        this->cantParticipantes = cantParticipantes;
    }

    bool PartidaMultiJugador::getTrasmitidaEnVivo(){
        return this->trasmitidaEnVivo;
    }

    void PartidaMultiJugador::setTrasmitidaEnVivo(bool trasmitidaEnVivo){
        this->trasmitidaEnVivo = trasmitidaEnVivo;
    }

    int PartidaMultiJugador::getCantParticipantes(){
        return this->cantParticipantes;
    }

    void PartidaMultiJugador::setCantParticipantes(){
        this->cantParticipantes = cantParticipantes;
    }

    PartidaMultiJugador::~PartidaMultiJugador(){}

    int PartidaMultiJugador::darTotalHorasParticipantes(int a){
        return a;
    }

