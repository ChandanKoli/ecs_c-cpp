#include <stdio.h>

struct Player {
    char gamertag[10];
    int level;
    int health;
};
int main(void)
{
   struct Player p1;

   printf("--- Character Creation ---\n");

   printf("Enter Gamertag (no spaces): \n");
   scanf("%s", p1.gamertag);

   printf("Enter level (number): \n");
   scanf("%d", &p1.level);

   printf("Enter health (no spaces): \n");
   scanf("%d", &p1.health);

printf("Profile: %s | Lvl: %d | HP: %d \n", p1.gamertag, p1.level, p1.health);

   return 0;
}