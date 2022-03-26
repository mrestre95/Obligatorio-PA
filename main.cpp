#include <iostream>
#include "DtFechaHora.h"
#include "DtJuego.h"
#include "DtJugador.h"
#include "Juego.h"
#include "Jugador.h"
#include "TipoGenero.h"
#include "DtPartida.h"
#include "PartidaIndividual.h"
#include "DtPartidaIndividual.h"
#include "PartidaMultiJugador.h"
#include "DtPartidaMultiJugador.h"

#define MAX_JUGADORES 5
#define MAX_VIDEOJUEGOS 5
#define MAX_PARTIDAS 5

using namespace std;

struct Jugadores{
    Jugador* jugador[MAX_JUGADORES];
    int cant;

}colJugadores;

struct VideoJuegos{
    Juego* juego[MAX_VIDEOJUEGOS];
    int cant;

}colVideoJuegos;

void agregarJugador(string nickname, int edad, string password);

void agregarVideojuegos(string nombre, TipoGenero genero);

DtJugador** obtenerJugadores(int& cantJugadores);

DtPartida** obtenerPartidas(string videojuego, int &cantPartidas);

bool existeJuego(Juego** juegos, int cantidadJuegos, string nombreJuego, int &posJuego);

void menuAgregarJugador();

void menuAgregarVideojuegos();

void menuObtenerJugadores();

void menuExisteJuego();

void menuObtenerPartidas();

void menu();


int main(){
  colJugadores.cant=0;
  colVideoJuegos.cant=0;
  
  menu();
  int opcion;
  cin >> opcion;
  while(opcion!=6){
    //hay que controlar si agregamos un numero que no existe dentro de las opciones??
    switch(opcion){
      case 1: try{menuAgregarJugador();}
              catch(invalid_argument& error){
                cout << error.what() << endl;}
              break;

      case 2: try{menuAgregarVideojuegos();}
              catch(invalid_argument& error){
                cout << error.what() << endl;}
              break;

      case 3: try{menuObtenerJugadores();}
              catch(invalid_argument& error){
                cout << error.what() << endl;}
              break;

      case 4: menuExisteJuego();
              break;

      case 5: try{menuObtenerPartidas();}
              catch(invalid_argument& error){
                cout << error.what() << endl;}
              break;

      default:
        cout << "Opcion incorrecta\n" << endl;
    }
    menu();
    cin >> opcion;
  }
}

void agregarJugador(string nickname, int edad, string password){
  int i=0;

  while(i<colJugadores.cant && colJugadores.jugador[i]->getNickname()!= nickname)
    i++;
  if(i==colJugadores.cant){
    Jugador* j = new Jugador(nickname,edad,password);
    colJugadores.jugador[colJugadores.cant]=j;
    colJugadores.cant++;
  } 
  else
    throw invalid_argument("Ya existe un jugador registrado con ese nombre!");
}

void menuAgregarJugador(){
    string nick, password;
    int edad;

  //system("cls");
  if(colJugadores.cant>=MAX_JUGADORES)
      throw invalid_argument("Cantidad maxima de jugadores registrados alcanzada!");
  else{
    cout << "________________________________" << endl;
    cout << "________AGREGAR JUGADOR_________" << endl;

    cout << "NICKNAME: ";
    cin >> nick;
    cout << "EDAD: ";
    cin >> edad;
    cout << "PASSWORD: ";
    cin >> password;
    try{
      agregarJugador(nick,edad,password);
    }
    catch (invalid_argument& n){
      cout << n.what() << endl;
      //system("sleep 300");
    }
  }
}

void agregarVideojuegos(string nombre, TipoGenero genero){
  int i=0;

  while(i<colVideoJuegos.cant && colVideoJuegos.juego[i]->getNombre()!= nombre)
    i++;
  if(i==colVideoJuegos.cant){
    Juego* vj = new Juego(nombre,genero);
    colVideoJuegos.juego[colVideoJuegos.cant]=vj;
    colVideoJuegos.cant++;
  }
  else{
    throw invalid_argument("Ya existe un videojuego registrado con ese nombre!");
  }
}

void menuAgregarVideojuegos(){
  string name;
  TipoGenero genero;
  int tipoGenero;

  //system("cls");
  if(colVideoJuegos.cant>=MAX_VIDEOJUEGOS)
      throw invalid_argument("Cantidad maxima de VideoJuegos registrados alcanzada!");
  else{
    cout << "________________________________" << endl;
    cout << "_______AGREGAR VIDEOJUEGO_______" << endl;
    cout << "NOMBRE: ";
    cin >> name;
    cout << "SELECCIONE UNO ENTRE LOS SIGUIENES TIPOS DE GENERO \n(1)ACCION \n(2)AVENTURA \n(3)DEPORTE \n(4)OTRO \n: ";
    cin >> tipoGenero;
    switch(tipoGenero){
                  case 1: genero=ACCION;
                          break;
                  case 2: genero=AVENTURA;
                          break;
                  case 3: genero=DEPORTE;
                          break;
                  case 4: genero=OTRO;
                          break;
              }
    try{
      agregarVideojuegos(name,genero);
    } catch (invalid_argument& n){
        cout << n.what() << endl;
      //system("sleep 300");
    }
  }
}

DtJugador** obtenerJugadores(int &cantJugadores){
    cantJugadores=colJugadores.cant;
    DtJugador** jugadores = new DtJugador*[cantJugadores];//estoy creando un DtJugador de cantidad "cantJugadores"
    for(int i=0;i<colJugadores.cant;i++){
        DtJugador* dt = colJugadores.jugador[i]->getDtJugador();
        jugadores[i]=dt;
    }
    return jugadores;
}

void menuObtenerJugadores(){

  if(colJugadores.cant==0)
      throw invalid_argument("No existen jugadores registrados!");
  else{
    //system("clear");
    cout << "_______________________________________" << endl;
    cout << "_________JUGADORES REGISTRADOS_________" << endl;
    DtJugador** jugador=obtenerJugadores(colJugadores.cant);
    for(int i=0;i<colJugadores.cant;i++)
      cout << jugador[i]->getNickName() << endl;
  }
}

bool existeJuego(Juego** juegos, int cantidadJuegos, string nombreJuego, int &posJuego){
  for(int i=0; i<cantidadJuegos; i++){
    if(juegos[i]->getNombre()==nombreJuego){
      posJuego=i;
      return true;
    }
  }
  throw invalid_argument("\nVideojuego no registado!");
  return false;
}

void menuExisteJuego(){
  int posJuego;
  string nombreJuego;
  bool existe = false; 
  cout << "________________________________" << endl;
  cout << "________Ingrese nombre del juego_________" << endl;

  cout << "Juego: ";
  cin >> nombreJuego;

  try{
    existeJuego(colVideoJuegos.juego,colVideoJuegos.cant,nombreJuego,posJuego);
    cout << "Existe el juego en la posicion " << posJuego << endl;
  }
  catch(invalid_argument& n){
      cout << n.what() << endl;
  }
}

DtPartida** obtenerPartidas(string videojuego, int &cantPartidas){
  int posJuego=cantPartidas;
  cantPartidas=colVideoJuegos.juego[posJuego]->getCantPartidas();
  DtPartida** dtpart = new DtPartida*[cantPartidas];
  int cant;
  Partida** partidas = colVideoJuegos.juego[posJuego]->getPartidas(cant);
  for(int i=0; i<cantPartidas; i++){
    if(PartidaIndividual* pi = dynamic_cast<PartidaIndividual*>(partidas[i])){//si devuelve una partida individual lo pudo castear, sino devuelve null
      DtPartida* dtpi = new DtPartidaIndividual(pi->getFecha(),pi->getDuracion(),pi->getContinuarPartidaAnterior());
      dtpart[i]= dtpi;
    }
    else if(PartidaMultiJugador* pm = dynamic_cast<PartidaMultiJugador*>(partidas[i])){
      DtPartida* dtpm = new DtPartidaMultiJugador(pm->getFecha(),pm->getDuracion(),pm->getTrasmitidaEnVivo(),pm->getCantParticipantes());
      dtpart[i]= dtpm;
    }
  }
  return dtpart;
}

void menuObtenerPartidas(){
  string videojuego;
  int posJuego, cantPartidas;
  if(colVideoJuegos.cant==0)
      throw invalid_argument("\nNo existen juegos registrados!");
  else{
    cout << "_________________________________________" << endl;
    cout << "_________PARTIDAS POR VIDEOJUEGO_________" << endl;
    cout << "Ingrese el nombre del VideoJuego para mostrar sus partidas" << endl;
    cin >> videojuego;

    try{
      existeJuego(colVideoJuegos.juego,colVideoJuegos.cant,videojuego,posJuego);
      
      DtPartida** partidas=obtenerPartidas(videojuego,posJuego);
      cantPartidas=posJuego;

      if(cantPartidas==0)
        throw invalid_argument("\nEl juego aun no tiene partidas");
      else{
        for(int i=0; i<cantPartidas;i++){
          if(DtPartidaIndividual* pi = dynamic_cast<DtPartidaIndividual*>(partidas[i])){
            cout << pi->getFecha() << endl;
            cout << pi->getDuracion() << endl;
            cout << pi->getContinuarPartidaAnterior() << endl;
          }
          else if(DtPartidaMultiJugador* pm = dynamic_cast<DtPartidaMultiJugador*>(partidas[i])){
            cout << pm->getFecha() << endl;
            cout << pm->getDuracion() << endl;
            cout << pm->getTrasmitidaEnVivo() << endl;
            cout << pm->getCantParticipantes() << endl;
          }
        }
      }
    } 
    catch(invalid_argument& n){
      cout << n.what() << endl;
    }
  }
}

void menu(){
  //system("cls");
  cout << "________________________________" << endl;
  cout << "_________Menu Principal_________" << endl;
  cout << "1. Agregar Jugador" << endl;
  cout << "2. Agregar VideoJuegos" << endl;
  cout << "3. Obtener Jugadores" << endl;
  cout << "4. Existe Juego" << endl;
  cout << "5. Obtener Partidas" << endl;
  cout << "6. Salir" << endl;
  cout << "________________________________\n" << endl;
  cout << "OPCION: ";
}


