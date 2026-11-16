/*
inside struct
{
    -- NEW INVENTORY STATS --
    int heal_potions;
    int buff_potions;
    int is_buffed; -- Acts as a boolean: 0 = false, 1 = true
};

inside enum
{
    HEAL, -- 3
    BUFF  -- 4
        new
};
strcpy(player.name, "Chandan");
-- ... keep your existing stats ... --
player.heal_potions = 3;
player.buff_potions = 1;
player.is_buffed = 0;

Radahn hits harder now
boss.primary_weapon_damage = 25;
*/
