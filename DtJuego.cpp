#include "DtJuego.h"
   
    DtJuego::DtJuego(){}

    DtJuego::DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego){
        this->nombre = nombre;
        this->genero = genero;
        this->totalHorasDeJuego = totalHorasDeJuego;
    }

    string DtJuego::getNombre(){
        return this->nombre;
    }

   /*  void DtJuego::setNombre(string nombre){
        this->nombre = nombre;
    } */

    TipoGenero DtJuego::getGenero(){
        return this->genero;
    }

  /*   void DtJuego::setGenero(TipoGenero genero){
        this->genero = genero;
    } */

    int DtJuego::getTotalHorasDeJuego(){
        return this->totalHorasDeJuego;
    }
    
/*     void DtJuego::setTotalHorasDeJuego(int totalHorasDeJuego){
        this->totalHorasDeJuego = totalHorasDeJuego;
    }
 */
    DtJuego::~DtJuego(){}
    
    ostream& operator <<(ostream& salida, const DtJuego juego){//sobrecarga de operadores
        cout<<"Nombre del juego "<< juego.nombre <<"\nGenero " << juego.genero << "\nTotalHorasDeJuego " << juego.totalHorasDeJuego << endl;
    return salida;
    }
