#include <stdio.h>
#include <conio.h>

void main()
{
    int health = 10;
    /* The asterisk (*) tells C: "This is a pointer. It holds a memory address, not a normal number." */
    int *tracker;

    clrscr();

    /* We give our pointer the exact GPS location of 'health' using the & symbol */
    tracker = &health;

    printf("--- Direct Memory Access ---\n");
    printf("Original Health: %d\n", health);

    /* We use %p to print raw memory addresses (Pointers) in C */
    printf("Health is physically located at RAM address: %p\n", (void *)tracker);

    /* Your turn: Remote Access
       When you put a * in front of a pointer, it means "Break into the house at this address."
       1. Write this exact line to remotely overwrite the health: *tracker = 10;
       2. printf the normal 'health' variable again to prove you changed it without ever touching the word 'health'. */

    getch();
}
