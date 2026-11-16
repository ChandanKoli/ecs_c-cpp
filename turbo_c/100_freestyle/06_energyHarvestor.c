#include <stdio.h>
#include <conio.h>

void main()
{
    int voltage_mV;

    clrscr();

    printf("Energy Harvestor Diagnostics...\n");
    printf("Enter piezo voltage in millivolts (e.g., 2000mV for 2V):\n");
    scanf("%d", &voltage_mV);

    if (voltage_mV <= 1500) {
        printf("The Energy Harvestor Device's Prcoess ESP32 is in sleep mode\n");
    } else if (voltage_mV <= 3300) {
        printf("Power stable. Transmitting truck telemetry.\n");
    } else {
        printf("Warning: Overvoltage! Engaging LDO regulator.\n");
    }

    getch();
}
