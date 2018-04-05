#include <ncurses.h>
#include <stdlib.h>

int main(void)
{
    int i;

    initscr();

    curs_set(0);

    for (i = 40; i <= 80; i++)
    {
        mvaddch(10, i, ' ');
        refresh();
        mvaddch(10, i+1, '@');
        refresh();
        napms(100);
    }

    curs_set(1);
    mvaddstr(0, 0, "Pulse una tecla para continuar... ");
    refresh();
    getch();

    endwin();

    return EXIT_SUCCESS;
}
