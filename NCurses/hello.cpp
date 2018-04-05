#include <stdio.h>
#include <stdlib.h>

#include <ncurses.h>

int main(){

    initscr();                      // Inicia el modo Curses.
    printw("Hello World");         // Imprime Hello World.
    refresh();                      // Imprime en la pantalla.
    getch();                        // Esperar entrada de usuario.
    endwin();                       // Terminar el modo curses.

	return EXIT_SUCCESS;
}
