demo: main.cpp
	CXX=g++ OUTPUT=demo make target
	CXX=em++ OUTPUT=demo.html make target

target: main.cpp
	${CXX} main.cpp -o ${OUTPUT} `pkg-config --cflags --libs gl sdl` -lm
