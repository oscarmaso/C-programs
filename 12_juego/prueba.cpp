#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


#define ESC '\x1b'

int main(){

    initscr();
    raw();
    printw("Hello World");
    getch();
    endwin();
	return EXIT_SUCCESS;
}
