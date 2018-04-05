#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "ncurses.h"

#define ESC '\x1b'
#define MUN 'X'
#define INC 0.35

#define MAP '-'
#define HX 200
#define VY 46

#define XC 200
#define YC 45

#define G .218086
#define E .8

/*void pintar_mapa(double ver, double hor) {
    clear();
    mvprintw(VY - (int) ver, HX + (int) hor, "%c", MAP);
}
*/
char leer_entrada(double *vx, double *vy){
     char entrada = getch();

        // Actualizar la posición
        switch (entrada) {
            case 'a':
               *vx -= INC;
                break;
            case 'd':
                *vx += INC;
                break;
            case 'w':
                *vy += INC;
                break;
            case 's':
                *vy -= INC;
                break;
        }

        return entrada;
}

void update(double vx, double *vy, double *x, double *y){

    /*  Condiciones de Borde o Contorno */
    if ( *y <= 0 ){
        *y = 0;
        if ( *vy < 0 )
            *vy *= -1 * E;
    }

    *vy -= G;
    *x += vx;
    *y += *vy;
}

void pintar_keko(double x, double y) {
    clear();
    mvprintw( YC - (int) y, XC + (int) x, "%c", MUN);
        refresh();
}

int main(){
    char entrada;
    double x = 0, y = 0, vx = 0, vy = 0;

    initscr();
    keypad(stdscr, TRUE);
    halfdelay(5);
    curs_set(0);

    // Bucle de juego
    do {
  //       pintar_mapa(ver, hor);                     // Pintar Mapa
        pintar_keko(x, y);                     // Pintar Muñeco
        usleep(50000);
        entrada = leer_entrada(&vx, &vy);      // Leer Teclado
        update(vx, &vy, &x, &y);               // Actualizar fisica

    } while ( entrada !=  ESC);

    curs_set(1);
    endwin();
}
