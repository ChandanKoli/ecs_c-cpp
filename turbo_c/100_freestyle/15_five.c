#include <stdio.h>
#include <conio.h>

/* --- OUR CUSTOM FUNCTION ---
   1. 'int' means this function will hand an integer back to us when it finishes.
   2. 'calculate_damage' is the name of our chip.
   3. The parentheses hold the inputs (base_damage and multiplier) we feed into it. */
int calculate_damage(int base_damage, int multiplier)
{
    int total;

    /* The internal math of the function */
    total = base_damage * multiplier;

    /* This spits the final answer out of the function */
    return total;
}

void main()
{
    int vandal_body = 40;
    int headshot_multi = 4;
    int vandal_hit;
    int phantom_body = 39;
    int phantom_hit;
    int single_body = 1;
    int double_body = 2;
    int tripple_body = 3;

    clrscr();

    printf("--- Damage Simulator ---\n");

    /* We "call" the function here. 
       We toss our two variables into the machine, and it catches the 'return' value. */
    vandal_hit = calculate_damage(vandal_body, headshot_multi);

    printf("Headshot! You dealt %d damage.\n", vandal_hit);

    phantom_hit = calculate_damage(phantom_body, double_body);

    printf("Bodyshots! You dealth %d damage.\n", phantom_hit);

    getch();
}
