#include <stdio.h>

enum WeaponClass {
    MELEE,  // is 0 selected
    ASSAULT, // is 1 selected
    SNIPER  // is 2 selected
};

int main(void) 
{
    enum WeaponClass equipped;
    int choice;

    printf("--- Loadout Selection ---\n");
    printf("0: Melee | 1: Assault | 2: Sniper\n");
    printf("Select weapon class: ");
    scanf("%d", &choice);

    equipped = choice;
    
    switch(equipped) {
        case MELEE: 
         printf("Equipped: Combat Knife\n");
         break;
        case ASSAULT:
         printf("Equipped: M4A15\n");
         break;
        case SNIPER:
         printf("Equipped: AWP\n");
         break;
       default:
       printf("Invalid Selection!!\n");

    return 0;
    }



    return 0;
}