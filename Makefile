main:

capybara:
	g++ main-1-1.cpp Capybara.h Capybara.cpp
	./a.exe
person:
	g++ main-1-2.cpp Person.h Person.cpp
	./a.exe	
wagon:
	g++ main-2-1.cpp Wagon.h Wagon.cpp Capybara.cpp
	./a.exe
airplane:
	g++ main-2-2.cpp Person.h Person.cpp Airplane.h  Airplane.cpp 
	./a.exe
