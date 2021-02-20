GL_PKGS=sdl2

CFLAGS=-Wall -Wextra -std=c11 -pedantic

all: gol

gol: gol.c
	$(CC) $(CFLAGS) `pkg-config --cflags $(GL_PKGS)` -o gol gol.c `pkg-config` --libs $(GL_PKGS)` -lm
