#ifndef DTJUGADOR
#define DTJUGADOR
#include <iostream>

using namespace std;

    class DtJugador{
        private:
            string nickname;
            int edad;

        public:
            DtJugador();
            DtJugador(string nickname,int edad);

            string getNickName();

            int getEdad();

            ~DtJugador();
            friend ostream& operator<<(ostream&,DtJugador&);
    };

#endif