#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL

#include <string>
#include <iostream>
#include "Partida.h"

using namespace std;

class PartidaIndividual:public Partida{
    private:
        bool continuaPartidaAnterior;

    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora* fecha, int duracion, Jugador* jugador, bool continuaPartidaAnterior);
        
        bool getContinuarPartidaAnterior();
        
        void setContinuarPartidaAnterior();
        
        ~PartidaIndividual();

        int darTotalHorasParticipantes(int a); //solo para que no de error lo pongo algun parametro hay que ver bien que lleva
};

#endif