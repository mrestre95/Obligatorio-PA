#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include "DtPartida.h"

class DtPartidaMultiJugador: public DtPartida{
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;

    public:
        DtPartidaMultiJugador();
        DtPartidaMultiJugador(DtFechaHora * fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes);

        bool getTrasmitidaEnVivo();

        int getCantParticipantes();

        ~DtPartidaMultiJugador();
};
#endif