run:	main.o NoBender.o AirBender.o EarthBender.o WaterBender.o FireBender.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o Persona.o Poder.o
	g++ main.o NoBender.o AirBender.o EarthBender.o WaterBender.o FireBender.o Ofensivo.o Defensivo.o Curativo.o Invocacion.o Persona.o Poder.o -o run

main.o:	main.cpp NoBender.h AirBender.h Persona.h
	g++ -c main.cpp

AirBender.o:	AirBender.cpp AirBender.h Persona.h Poder.h
	g++ -c AirBender.cpp

EarthBender.o:	EarthBender.cpp EarthBender.h Persona.h Poder.h
	g++ -c EarthBender.cpp

FireBender.o:	FireBender.cpp FireBender.h Persona.h Poder.h
	g++ -c FireBender.cpp

WaterBender.o:	WaterBender.cpp WaterBender.h Persona.h Poder.h
	g++ -c WaterBender.cpp

NoBender.o:	NoBender.cpp NoBender.h Persona.h
	g++ -c NoBender.cpp

Persona.o: Persona.cpp Persona.h
	g++ -c Persona.cpp

Poder.o: Poder.cpp Poder.h
	g++ -c Poder.cpp

Ofensivo.o:	Ofensivo.cpp Ofensivo.h Poder.h
	g++ -c Ofensivo.cpp

Defensivo.o:	Defensivo.cpp Defensivo.h Poder.h
	g++ -c Defensivo.cpp

Curativo.o:	Curativo.cpp Curativo.h Poder.h
	g++ -c Curativo.cpp

Invocacion.o:	Invocacion.cpp Invocacion.h Poder.h
	g++ -c Invocacion.cpp

clean:
	rm *.o run
