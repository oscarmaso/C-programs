/*
 *Notes might be a bit scattered or maybe wrong to some extent* 

 how to play:
 #start game in full terminal. it will look funny is u dont
 #use arrow keys to move
 #press 'o' to place barrier
 #to delete barrier piece stand by it ans press w,a,s,d. ex: stand under the barrer u wanna delete and press w
 #if you get stuck in a barrier and cant move (this is a bug) press 'r' to go to (0,0)
 #press 'q' to end the game
 #to save the game u are on, while in the terminal copy all the blue area. now go make a copy of this file here. see that big open space printw? well u need to replace all the stuff it is printing with the screen u copied. then put \n after every 'o' and it should work
*/
#include <curses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <term.h>
int main()
{ 
initscr();
start_color();//says we can have color(personal note)
noecho();//keeps from pressing other characters(personal note)
cbreak();
nodelay(stdscr, TRUE);
keypad(stdscr, TRUE);
init_pair(1, COLOR_WHITE, COLOR_BLUE);
attron(COLOR_PAIR(1));
system("resize -s 34 130");
#include "intro.cpp"
    move(0,116);
    printw("*save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw(" quit");
    move(7,116);
    printw("#");
    move(0,0);
    refresh();
int answer;
answer = 27;
for( ; ; ) {
char readch = inch();
int y, x, stars, r, menuscroller, piego, pienogo, menuenter, creative, gravity, up, elevator, block, blockselect;
FILE * world;
int ch = getch();;
if (creative > 1) {
  creative = 0;
}
switch (ch) {
  case KEY_DOWN:
    getyx(stdscr , y, x);
    move(y+1,x);
    refresh();
    getch();
  }
switch (ch) {
  case KEY_UP:
    up = 20;
  }
switch (ch) {
  case KEY_LEFT:
    getyx(stdscr , y, x);
    move(y,x-1);
    refresh();
    getch();
  }
switch (ch) {
  case KEY_RIGHT:
    getyx(stdscr , y, x);
    move(y , x+1 );
    refresh();
    getch();
  }
  if (up == 20 && creative == 0) {
    getyx(stdscr , y, x);
    move(y-1,x);
    refresh();
    getch();
    up = 21;
  }
  if (readch=='#') {
    move(y,x);
    refresh();
    getch();
  }
  if (ch=='b') {
    block = block+1;
    blockselect=20;
  }
  if (ch=='v') {
    block = block-1;
    blockselect=20;
  }
  if (block>6) {
    block = 1;
  }
  if (block<1) {
    block = 6;
  }
  if (ch=='g') {
    menuscroller = menuscroller+1;
    menuenter=20;
  }
  if (ch=='t') {
    menuscroller = menuscroller-1;
    menuenter=20;
  }
  if (menuscroller>6) {
    menuscroller = 1;
  }
  if (menuscroller<1) {
    menuscroller = 6;
  }
  if (menuscroller == 1 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw("*save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw(" quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (menuscroller == 2 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw(" save");
    move (1,116);
    printw("*load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw(" quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (menuscroller == 3 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw(" save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw("*new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw(" quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (menuscroller == 4 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw(" save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw("*redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw(" quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (menuscroller == 5 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw(" save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw("*mode");
    move(5,116);
    printw(" quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (menuscroller == 6 && menuenter == 20) {
    getyx(stdscr,y,x);
    move(0,116);
    printw(" save");
    move (1,116);
    printw(" load");
    move(2,116);
    printw(" new ");
    move(3,116);
    printw(" redo");
    move(4,116);
    printw(" mode");
    move(5,116);
    printw("*quit");
    move(y,x);
    refresh();
    menuenter = 10;
  }
  if (block == 1 && blockselect == 20) {
    move(7,116);
    printw("#");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if (block == 2 && blockselect == 20) {
    move(7,116);
    printw("/");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if (block == 3 && blockselect == 20) {
    move(7,116);
    printw("[");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if (block == 4 && blockselect == 20) {
    move(7,116);
    printw("]");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if (block == 5 && blockselect == 20) {
    move(7,116);
    printw("&");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if (block == 6 && blockselect == 20) {
    move(7,116);
    printw(":");
    move(y,x);
    refresh();
    blockselect = 21;
  }
  if(ch==' ' && creative == 0 && block == 1) {
    printw("#");
    refresh();
  }
  if(ch==' ' && creative == 0 && block == 2) {
    printw("/");
    refresh();
  }
  if(ch==' ' && creative == 0 && block == 3) {
    printw("[");
    refresh();
  }
  if(ch==' ' && creative == 0 && block == 4) {
    printw("]");
    refresh();
  }
  if(ch==' ' && creative == 0 && block == 5) {
    printw("&");
    refresh();
  }
  if(ch==' ' && creative == 0 && block == 6) {
    printw(":");
    refresh();
  }
  if (menuscroller == 1 && ch == '\n') {
    world = fopen("world.win", "w");
    putwin(stdscr, world);
    fclose(world);
  }
  if (menuscroller == 2 && ch == '\n') {
    delwin(stdscr);
    world = fopen("world.win", "r");
    stdscr = getwin(world);
    fclose(world);
    refresh();
  }
  if (menuscroller == 3 && ch == '\n') {
    #include "new.cpp"
    refresh();
  }
  if (menuscroller == 4 && ch == '\n') {
    move(0,0);
    refresh();
  }
  if (menuscroller == 5 && ch == '\n') {
    creative = creative+1;
  }
  if (menuscroller == 6 && ch == '\n') {
    endwin();
    return 0;
  }
  if(ch=='w' && creative == 0) {
    readch=='b';
    getyx(stdscr,y,x);
    move(y-1,x);
    printw(" ");
    getyx(stdscr,y,x);
    move(y+1,x-1);
    refresh();
  }                 
  if(ch=='a' && creative == 0) {
    readch=='b';
    getyx(stdscr,y,x);
    move(y,x-1);
    printw(" ");
    getyx(stdscr,y,x);
    move(y,x);
    refresh();
  }
  if(ch=='s' && creative == 0) {
    readch=='b';
    getyx(stdscr,y,x);
    move(y+1,x);
    printw(" ");
    getyx(stdscr,y,x);
    move(y-1,x-1);
    refresh();
  }
  if(ch=='d' && creative == 0) {
    readch=='b';
    getyx(stdscr,y,x);
    move(y,x+1);
    printw(" ");
    getyx(stdscr,y,x);
    move(y,x-2);
    refresh();
  }
  if (ch=='r') {
    move(0,0);
    refresh();
  }
  if (readch=='&') {
    answer=0;
    printw(" ");
    move(0,0);
    printw("Hello There!");
    refresh();
    sleep(2);
    move(0,0);
    printw("Would you ike some pie? y/n");
    piego = 20;
    pienogo = 20;
    }
  if (piego == 20 && ch == 'y') {
    move(0,0);
    printw("                           ");
    move(0,0);
    printw("Yay! You get gold star!");
    stars=stars+1;
    move(32,0);
    printw("gold stars: %d", stars);
    refresh();
    sleep(2);
    move(0,0);
    printw("                       ");
    move(y,x);
    refresh();
    getch();
    piego = 21;
    pienogo = 21;
    }
  if (pienogo == 20 && ch == 'n') {
    move(0,0);
    printw("                           ");
    move(0,0);
    printw(":( you dont like my pie...");
    refresh();
    sleep(2);
    move(0,0);
    printw("                          ");
    refresh();
    move(y,x);
    refresh();
    getch();
    piego = 21;
    pienogo = 21;
    } 
  if (readch == ':') {
    move(y-1,x);
    refresh();
  }
  }
}
