app: main.o
	-rm sfml-app
	g++ main.o -o sfml-app -l sfml-graphics -l sfml-window -l sfml-system

main.o:
	-rm main.o
	g++ -c main.cpp 

clean:
	rm main.o
	rm sfml-app
