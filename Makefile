build:
	g++ ./src/main.cc $(find ./src/entity -name "*.cc") -o ./bin/main.o -I modules
run:
	./bin/main.o	