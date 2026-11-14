#include <stdio.h>
#include <conio.h>

void main()
{
    int rail_power, pin14_vcc, pin7_gnd;
    int surface, pins, resistor, led_legs;

    clrscr();

    printf("--- Complete 74xx IC Breadboard Diagnostic ---\n");

    /* Check 1: The Regulator */
    printf("Step 1: Is the LM7805 feeding 5V to the breadboard rails? (1=Yes, 0=No): ");
    scanf("%d", &rail_power);

    if (rail_power == 1) {
        /* Check 2: VCC */
        printf("Step 2: Is Pin 14 wired to the 5V rail? (1/0): ");
        scanf("%d", &pin14_vcc);

        if (pin14_vcc == 1) {
            /* Check 3: Ground */
            printf("Step 3: Is Pin 7 wired to the Ground rail? (1/0): ");
            scanf("%d", &pin7_gnd);

            if (pin7_gnd == 1) {
                printf("Power Diagnostics Clear: IC is safely powered.\n\n");
            } else {
                printf("Fatal Error: Floating ground. IC will overheat.\n");
                getch();
                return;
            }
        } else {
            printf("Error: Pin 14 dead. IC has no operating power.\n");
            getch();
            return;
        }
    } else {
        /* This else is now correctly attached directly to the rail_power 'if' */
        printf("Error: Rails are dead. Check your 9V battery and regulator wiring.\n");
        getch();
        return;
    }

    /* --- PHYSICAL HARDWARE CHECKS --- */

    printf("1. Are you on a non-static surface (desk/mat)? (1=Yes, 0=No): ");
    scanf("%d", &surface);
    if (surface == 0) {
        printf("Halt: Move off the bed/carpet. Static will instantly kill a logic IC.\n");
        getch();
        return;
    }

    printf("2. Are all IC pins firmly pressed flat into the breadboard? (1/0): ");
    scanf("%d", &pins);
    if (pins == 0) {
        printf("Halt: Loose pins cause floating inputs. Reseat the IC.\n");
        getch();
        return;
    }

    printf("3. Is there a resistor (e.g., 220 ohm) on the output before the LED? (1/0): ");
    scanf("%d", &resistor);
    if (resistor == 0) {
        printf("Halt: You will burn out the LED and the IC gate. Add a resistor.\n");
        getch();
        return;
    }

    printf("4. Is the LED long leg (Anode) taking the signal, and short leg to Ground? (1/0): ");
    scanf("%d", &led_legs);
    if (led_legs == 0) {
        printf("Halt: LED is backwards. It will block current and not light up.\n");
        getch();
        return;
    }

    printf("\nAll hardware checks passed! Safe to run truth table inputs.\n");

    getch();
}
