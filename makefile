main: main.o Vehicle.o PoweredVehicle.o Jet.o Skateboard.o Scooter.o Bicycle.o Car.o
	g++ -std=c++11 -o main main.o Vehicle.o PoweredVehicle.o Jet.o Skateboard.o Scooter.o Bicycle.o Car.o

main.o: main.cpp Vehicle.h PoweredVehicle.h Jet.h Skateboard.h Scooter.h Bicycle.h Car.h
	g++ -std=c++11 -c main.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -std=c++11 -c Vehicle.cpp

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -std=c++11 -c PoweredVehicle.cpp

Jet.o: Jet.cpp Jet.h
	g++ -std=c++11 -c Jet.cpp

Car.o: Car.cpp Car.h
	g++ -std=c++11 -c Car.cpp

Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -std=c++11 -c Skateboard.cpp

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -std=c++11 -c Bicycle.cpp

Scooter.o: Scooter.cpp Scooter.h
	g++ -std=c++11 -c Scooter.cpp

clean:
	rm *.o main


