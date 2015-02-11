#include "7w.h"
#include <stdlib.h>

void io_init();
void cards_init();
void io_printcard(int x, int y, int era, int card);
void cardtour();
void io_clearscreen();

void halt()
{
 endwin();
 exit(0);
}

main()
{
 io_init();
 cards_init();
 cardtour();
 io_printcard(0, 0, 0, 0);
 io_printcard(0, 6, 2, 14);
 io_printcard(0, 20, 2, 3);
 io_printcard(31, 0, 1, 12);
 io_printcard(31, 20, 2, 25);
 io_getkey();
 halt();
}

void cardtour()
{
 int era, card;
 era = card = 0;
 while(1) {
  io_clearscreen();
  io_printcard(0, 0, era, card);
  switch(io_getkey()) {
   case DOWN: if(card < CARDSPERERA-1) card++;
    break;
   case UP: if(card > 0) card--;
    break;
   case LEFT: if(era > 0) era--;
    break;
   case RIGHT: if(era < 2) era++;
    break;
   case 'q': halt();
    break;
   default: break;
  }
 }
}
