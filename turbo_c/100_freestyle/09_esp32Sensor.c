#include <stdio.h>
#include <conio.h>

void main()
{
    int voltage = 0;

    clrscr();

    printf("Booting ESP32 Continuous Sensor Read...\n");

    /* "As long as the voltage is under 3300, keep doing this:" */
    while (voltage < 3300) {
        printf("Enter your voltage in (mV):\n");
        scanf("%d", &voltage);

        if (voltage < 3300) {
            printf("System Stable, Reading again...\n\n");
        } else {
            printf("Surge detected! Breaking loop.\n");
        }
    }

    /* The code only reaches here when voltage hits 3300 or higher */
    printf("Emergency LDO regulator engaged. Firmware halted.\n");

    getch();
}
