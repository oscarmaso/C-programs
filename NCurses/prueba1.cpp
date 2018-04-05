#include <stdio.h>
#include <stdlib.h>

#include <ncurses.h>

int main(){

    int ch;

    initscr();                      // Inicia el modo Curses.
    raw();                          // Desactiva buffer de linea.
    keypad(stdscr, TRUE);           // Obtener F1, F2 etc..
    noecho();                       // Sin echo() al hacer getch

    printw("Pulse Caracter \n ");       // Imprime Hello World.
    ch = getch();                   /* Si no ha llamado a raw() tenemos
                                     * que pulsar enter antes de que
                                     * llegue el programa */
    if(ch == KEY_F(1))              // Sin habilitar keypad esto no
        printw("F1 Key Pressed");   // Llegara a nosotros
                                    /* Sin noecho() algunos feos
                                     * caracteres de escape podrian ser
                                     * impresos en patalla */
    else
    {
        printw("La tecla pulsada es \n");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }

    refresh();                      // Imprime en la pantalla.
    getch();                        // Esperar entrada de usuario.
    endwin();                       // Terminar el modo curses.

	return EXIT_SUCCESS;
}
