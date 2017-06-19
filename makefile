OPTION =  -g -Wall -O3 -std=c++11

CC = gcc
C++ = g++

all:	NormChIP

clean: 
	rm  NormChIP

NormChIP:	main.cpp function.cpp class.hpp
	
	$(C++) -o NormChIP  function.cpp main.cpp  $(OPTION)
