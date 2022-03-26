#include "DtFechaHora.h"

  DtFechaHora::DtFechaHora(){}

  DtFechaHora::DtFechaHora(int dia,int mes,int anio, int hora, int minuto){
    this->dia=dia;
    this->mes=mes;
    this->anio=anio;
    this->hora=hora;
    this->minuto=minuto;
  }

  int DtFechaHora::getDia(){
    return this->dia;
  }

  int DtFechaHora::getMes(){
    return this->mes;
  }

  int DtFechaHora::getAnio(){
    return this->anio;
  }

  int DtFechaHora::getHora(){
    return this->hora;
  }

  int DtFechaHora::getMinuto(){
    return this->minuto;
  }
  
  DtFechaHora::~DtFechaHora(){}

  bool operator ==(const DtFechaHora& fecha1, const DtFechaHora& fecha2){/// mmm ver letra
    return fecha1.dia==fecha2.dia && fecha1.mes==fecha2.mes && fecha1.anio==fecha2.anio && fecha1.hora==fecha2.hora && fecha1.minuto==fecha2.minuto;
  }
  
  ostream& operator<<(ostream& salida, const DtFechaHora& fecha){
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << "/" << fecha.hora << "/" << fecha.minuto;
    return salida;
  }