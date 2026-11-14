/* #include <stdio.h>
int main (void)
{
    int switch_a, switch_b;
    printf("For EXOR Gate IC7486 breadboard diagnostics...\n");
    printf("Enter Value of Switch A and Switch B:\n");
    scanf("%d", &switch_a);
    scanf("%d",&switch_b);
    if(switch_a == switch_b){
        printf("The Output is False\n");
    } else {
        printf("The output is True\n");
    }
    return 0;
} */
#include <stdio.h>

int main (void) {
    int power_on;
    int switch_a, switch_b;
    
    printf("For EXOR Gate IC7486 breadboard diagnostics...\n");
    
    // Outer Check: Is the breadboard powered?
    printf("Is the 5V power supply on? (1 for Yes, 0 for No): ");
    scanf("%d", &power_on);
    
    if (power_on == 1) {
        
        // EVERYTHING inside here only runs if the power is actually on!
        printf("Enter Value of Switch A and Switch B:\n");
        scanf("%d", &switch_a);
        scanf("%d", &switch_b);
        
        if (switch_a != switch_b) {
            printf("The Output is True\n");
        } else {
            printf("The output is False\n");
        }
        
    } else {
        // This connects to the very first power check
        printf("System offline. Turn on the power supply first.\n");
    }
    
    return 0;
}
