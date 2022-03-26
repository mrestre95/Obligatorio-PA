principal: Juego.o DtJuego.o DtFechaHora.o Jugador.o DtJugador.o Partida.o PartidaIndividual.o PartidaMultiJugador.o DtPartida.o DtPartidaIndividual.o DtPartidaMultiJugador.o main.o

	g++ Juego.o DtJuego.o DtFechaHora.o Jugador.o DtJugador.o Partida.o PartidaIndividual.o PartidaMultiJugador.o Dtpartida.o DtPartidaIndividual.o DtPartidaMultiJugador.o main.o -g -o videojuegos.exe

Juego.o: Juego.cpp
	g++ Juego.cpp -g -c

DtJuego.o: DtJuego.cpp
	g++ DtJuego.cpp -g -c

DtFechaHora.o: DtFechaHora.cpp
	g++ DtFechaHora.cpp -g -c

Jugador.o: Jugador.cpp
	g++ Jugador.cpp -g -c

DtJugador.o: DtJugador.cpp
	g++ DtJugador.cpp -g -c

Partida.o: Partida.cpp
	g++ Partida.cpp -g -c

PartidaIndividual.o: PartidaIndividual.cpp
	g++ PartidaIndividual.cpp -g -c

PartidaMultiJugador.o: PartidaMultiJugador.cpp
	g++ PartidaMultiJugador.cpp -g -c

DtPartida.o: DtPartida.cpp
	g++ DtPartida.cpp -g -c

DtPartidaIndividual.o: DtPartidaIndividual.cpp
	g++ DtPartidaIndividual.cpp -g -c

DtPartidaMultiJugador.o: DtPartidaMultiJugador.cpp
	g++ DtPartidaMultiJugador.cpp -g -c

Main.o: main.cpp
	g++ main.cpp -g -c


clean:
		rm -rf *.o videojuegos
		clear