#ifndef DTJUEGO
#define DTJUEGO
#include "TipoGenero.h"
#include <string>
#include <iostream>

using namespace std;

class DtJuego{
    private:
        string nombre;
        TipoGenero genero;
        int totalHorasDeJuego;

    public:
        DtJuego();
        DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego);

        string getNombre();
        //void setNombre(string nombre);

        TipoGenero getGenero();
        //void setGenero(TipoGenero genero);

        int getTotalHorasDeJuego();
        //void setTotalHorasDeJuego(int totalHorasDeJuego);

        ~DtJuego();

        friend ostream& operator <<(ostream&, const DtJuego);// sobrecarga
};

#endif