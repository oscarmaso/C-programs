#include <stdlib.h>
#include <ncurses.h>

int main(){

    initscr();
    printw("Numero 1");
    refresh();
    getch();
    endwin();
	return EXIT_SUCCESS;
}
