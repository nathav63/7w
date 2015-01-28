#include "7w.h"
#include <stdlib.h>

void io_init();
void cards_init();
void io_printcard(int x, int y, int era, int card);

void halt()
{
 endwin();
 exit(0);
}

main()
{
 io_init();
 cards_init();
 io_printcard(0, 0, 0, 0);
 io_printcard(0, 4, 2, 14);
 io_printcard(0, 10, 2, 3);
 io_printcard(31, 0, 1, 12);
 io_getkey();
 halt();
}
