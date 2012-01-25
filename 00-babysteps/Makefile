CFLAGS=-O3

PLATFORM := $(shell uname -a | cut -d ' ' -f 1)
ifeq ($(PLATFORM),Darwin)
LIBS=-framework OpenGL $(shel pkg-config sdl) -lm
else
LIBS=$(shell pkg-config --cflags --libs gl sdl) -lm
# TODO: Handle Windows as well
endif

all: native web

native: main.cpp
	g++ -o demo main.cpp $(CFLAGS) $(LIBS)

web: main.cpp
	em++ -o demo.html main.cpp $(CFLAGS)

clean: demo*
	rm demo demo.html 2>/dev/null
