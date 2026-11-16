#include <stdio.h>
#include <conio.h>

enum WeaponClass {
    MELEE,   /* is 0 selected */
    ASSAULT, /* is 1 selected */
    SNIPER   /* is 2 selected */
};

void main()
{
    enum WeaponClass equipped;
    int choice;

    clrscr();

    printf("--- Loadout Selection ---\n");
    printf("0: Melee | 1: Assault | 2: Sniper\n");
    printf("Select weapon class: ");
    scanf("%d", &choice);

    equipped = (enum WeaponClass)choice;

    switch (equipped) {
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
            break;
    }

    getch();
}
