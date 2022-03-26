#ifndef DTPARTIDA
#define DTPARTIDA   
#include "DtFechaHora.h"
#include "Jugador.h"
#include <iostream>
using namespace std;

class DtPartida{
    protected:
        DtFechaHora *fecha;
        int duracion;

    public:
        DtPartida();
        DtPartida(DtFechaHora * fecha, int duracion);
        DtFechaHora * getFecha();        
        int getDuracion();
        virtual ~DtPartida();//tuve que hacerla virtual para que no me diera error el dinamic cast de la operacion obtener partidas
};

#endif