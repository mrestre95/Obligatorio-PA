#ifndef JUEGO
#define JUEGO
#define MAX_PARTIDAS 5
#include "TipoGenero.h"
#include <string>
#include "Partida.h"
using namespace std;

class Juego{
    private:
        string nombre;
        TipoGenero genero;

        Partida * partidas[MAX_PARTIDAS];
        int cantPartidas;
        //visibilidad a PARTIDA, 1 juego tiene un conjunto de partida. Falta agregar eso
    public:
        Juego();
        Juego(string nombre, TipoGenero genero);

        string getNombre();
        void setNombre(string nombre);

        TipoGenero getGenero();
        void setGenero(TipoGenero genero);

        ~Juego();

        int getCantPartidas();

        void setCantPartidas(int cantPartidas);

        void setPartida(Partida * partida, int pos);

        Partida** getPartidas(int &cant);        
};

#endif