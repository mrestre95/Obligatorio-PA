#ifndef DTFECHAHORA
#define DTFECHAHORA
#include<iostream>
using namespace std;

class DtFechaHora{
    private:
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;

    public:
        DtFechaHora();
        DtFechaHora(int dia,int mes,int anio,int hora,int minuto);

        int getDia();
        int getMes();
        int getAnio();
        int getHora();
        int getMinuto();

        ~DtFechaHora();
        
        friend bool operator==(const DtFechaHora&, const DtFechaHora&);
        friend ostream& operator<<(ostream&, const DtFechaHora&);
};
#endif