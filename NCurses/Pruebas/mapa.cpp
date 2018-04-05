#include <stdlib.h>
#include <ncurses.h>

#define Y 10
#define X 40
int main(){

    initscr();

    for (int  f = 0; f<=Y; f++){
        for (int c = 0; c<=X; c++)
        {
            if(f==0 || f==Y)
               printw("*");
              else
                if (c==0 || c==X)
                  printw("*");
                  else
                      printw(" ");
                if (c==X)
                    printw("\n");
        }
    }
    refresh();
    getch();
    endwin();
	return EXIT_SUCCESS;
}
