#include <stdio.h>
#include <conio.h>

struct Player {
    char gamertag[10];
    int level;
    int health;
};

void main()
{
    struct Player p1;

    clrscr();

    printf("--- Character Creation ---\n");

    printf("Enter Gamertag (no spaces): \n");
    scanf("%s", p1.gamertag);

    printf("Enter level (number): \n");
    scanf("%d", &p1.level);

    printf("Enter health (no spaces): \n");
    scanf("%d", &p1.health);

    printf("Profile: %s | Lvl: %d | HP: %d \n", p1.gamertag, p1.level, p1.health);

    getch();
}
