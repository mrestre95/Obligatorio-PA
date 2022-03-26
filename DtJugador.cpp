#include "DtJugador.h"

    DtJugador::DtJugador(){}

    DtJugador::DtJugador(string nickname,int edad){
        this->nickname=nickname;
        this->edad=edad;
    }

    string DtJugador::getNickName(){
        return this->nickname;
    }

    int DtJugador::getEdad(){
        return this->edad;
    }

    DtJugador::~DtJugador(){}

    ostream& operator<<(ostream& salida,DtJugador& jugador){
        cout << "Nickname: " << jugador.getNickName() << "\n: " << endl;
        return salida;
}

