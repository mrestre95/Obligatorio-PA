#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR

#include <string>
#include <iostream>
#include "DtFechaHora.h"
#include "Partida.h"

using namespace std;

class PartidaMultiJugador:public Partida{
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;
    
    public:
        PartidaMultiJugador();
        PartidaMultiJugador(DtFechaHora * fecha, int duracion, Jugador * jugador, bool trasmitidaEnVivo, int cantParticipantes);
        
        bool getTrasmitidaEnVivo();
        void setTrasmitidaEnVivo(bool trasmitidaEnVivo);

        int getCantParticipantes();
        void setCantParticipantes();

        ~PartidaMultiJugador();

        int darTotalHorasParticipantes(int a);
};
#endif