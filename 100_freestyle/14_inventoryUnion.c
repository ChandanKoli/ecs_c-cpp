#include <stdio.h>

// It looks exactly like a struct, but we use the word 'union'
union InventorySlot {
    int ammo;
    float shield;
};

int main(void) {
    union InventorySlot slot1;

    printf("--- Inventory Memory Test ---\n");

    // 1. We pick up ammo and store it
    slot1.ammo = 120;
    printf("Picked up Ammo: %d rounds\n", slot1.ammo);

    // 2. We pick up a shield and store it in the EXACT SAME memory slot
    slot1.shield = 50.5;
    printf("Picked up Shield: %.1f HP\n", slot1.shield);

    // 3. The plot twist: Let's try to check our ammo count now
    printf("\nWait, checking ammo again... %d\n", slot1.ammo);
    
    printf("The ammo data was completely vaporized by the shield!\n");

    return 0;
}