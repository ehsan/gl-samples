demo: es2gears.c
	CXX=gcc OUTPUT=demo make target
	#CXX=emcc OUTPUT=demo.html make target

target: es2gears.c
	${CXX} es2gears.c -g -o ${OUTPUT} `pkg-config --cflags --libs gl sdl` -lm
