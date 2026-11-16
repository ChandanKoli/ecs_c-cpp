#include <stdio.h>
#include <string.h> // to copy text into structs

struct Entity
{
   char name[20];
   int hp;
   int max_hp;
   int primary_weapon_damage;
   int secondary_weapon_damage;
   int ultimate_damage;
   // new
   int heal_potion;
   int buff_potion;
   int is_buffed; // boolean
};

enum Action
{
   PRIMARY,   // 0
   SECONDARY, // 1
   ULTIMATE,  // 2
   HEAL,      // 3
   BUFF       // 4
};

void take_damage(struct Entity *target, int damage)
{
   target->hp = target->hp - damage;
   if (target->hp < 0)
   {
      target->hp = 0;
   }
}

int main(void)
{
   struct Entity player;
   struct Entity boss;

   int choice;
   enum Action move;

   printf("--- INITIALIZING fromSOFTWARE ENGINE ---\n\n");
   strcpy(player.name, "Chandan");
   player.hp = 100;
   player.max_hp = 100;
   player.primary_weapon_damage = 25;
   player.secondary_weapon_damage = 100;
   player.ultimate_damage = 1000;
   player.heal_potion = 2;
   player.buff_potion = 1;
   player.is_buffed = 0;

   strcpy(boss.name, "Radahn");
   boss.hp = 2000;
   boss.max_hp = 2000;
   boss.primary_weapon_damage = 25;
   boss.ultimate_damage = 50;

   printf("%s (%d HP) VS %s (%d HP)\n", player.name, player.hp, boss.name, boss.hp);

   while (player.hp > 0 && boss.hp > 0)
   {
      printf("\n--- YOUR TURN ---\n");
      // Updated the menu so you know what buttons to press
      printf("0: Primary | 1: Secondary | 2: Ultimate | 3: Heal (%d left) | 4: Buff (%d left)\n", player.heal_potion, player.buff_potion);
      printf("Select action: ");
      scanf("%d", &choice);
      move = choice;

      switch (move)
      {
      case PRIMARY:
         // If we drank the buff potion, multiply damage by 4
         if (player.is_buffed == 1)
         {
            printf("You slash with ENRAGED Blades! Dealing %d damage.\n", player.primary_weapon_damage * 4);
            take_damage(&boss, player.primary_weapon_damage * 4);
         }
         else
         {
            printf("You slash with Blades! Dealing %d damage.\n", player.primary_weapon_damage);
            take_damage(&boss, player.primary_weapon_damage);
         }
         break;

      case SECONDARY:
         printf("You swing the Zweihander! Dealing %d damage.\n", player.secondary_weapon_damage);
         take_damage(&boss, player.secondary_weapon_damage);
         break;

      case ULTIMATE:
         printf("You unleash Wrath! Dealing %d damage.\n", player.ultimate_damage);
         take_damage(&boss, player.ultimate_damage);
         break;

      case HEAL:
         if (player.heal_potion > 0)
         {
            printf("You drink a Crimson Flask! (+40 HP)\n");
            player.hp = player.hp + 40;
            player.heal_potion--; // Consumes 1 potion

            // Cap health so it doesn't exceed 100
            if (player.hp > player.max_hp)
            {
               player.hp = player.max_hp;
            }
         }
         else
         {
            printf("You reach for a flask, but it's empty! Turn wasted.\n");
         }
         break;

      case BUFF:
         if (player.buff_potion > 0)
         {
            printf("You consume Bloodboil! Primary attacks deal 4x damage.\n");
            player.is_buffed = 1; // Flips the boolean to true
            player.buff_potion--; // Consumes the buff
         }
         else
         {
            printf("You have no buffs left!\n");
         }
         break;

      default:
         printf("You fumbled your weapon! (0 damage)\n");
      }

      if (boss.hp > 0)
      {
         printf("Radahn swings his gravity swords! Dealing %d damage.\n", boss.primary_weapon_damage);
         take_damage(&player, boss.primary_weapon_damage);
      }

      printf("\nSTATUS: %s (%d HP) | %s (%d HP)\n", player.name, player.hp, boss.name, boss.hp);
   }
   if (player.hp <= 0)
   {
      printf("\nYOU DIED.\n");
   }
   else
   {
      printf("\n GOD SLAIN.\n");
   }

   return 0;
}