#ifndef PARTIDA
#define PARTIDA
#include "DtFechaHora.h"
#include "Jugador.h"

class Partida{
    protected:
        DtFechaHora* fecha;
        int duracion;
        Jugador* jugador;

    public:
        Partida();
        Partida(DtFechaHora* fecha, int duracion, Jugador* jugador);

        DtFechaHora* getFecha();
        void setFecha(DtFechaHora* fecha);

        int getDuracion();
        void setDuracion(int duracion);

        Jugador* getJugador();
        void setJugador(Jugador* jugador);

        virtual int darTotalHorasParticipantes() = 0; // revisar que parametros deberia llevar

        ~Partida();
};
#endif