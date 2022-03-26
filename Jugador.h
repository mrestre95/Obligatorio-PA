#ifndef JUGADOR
#define JUGADOR
//#include "TipoGenero.h"
#include <string>
#include <iostream>
#include "DtJugador.h"

using namespace std;

class Jugador{
    private:
        string nickname;
        int edad;
        string password;
        
    public:
        Jugador();
        Jugador(string nickname, int edad, string password);

        string getNickname();
        void setNickname(string nickname);

        int getEdad();
        void setEdad(int edad);

        string getPassword();
        void setPassword(int password);

        DtJugador* getDtJugador();
        
        ~Jugador();
        
};

#endif