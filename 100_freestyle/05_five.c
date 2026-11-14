#include <stdio.h>
int main(void){

    int trigger_value;

    printf("Reading Hall effect trigger sensor value...\n");
    printf("Enter the pressure value(0-255):");

    scanf("%d", &trigger_value);

    if( trigger_value<= 55 ){
      printf("FIRE - Single bullet\n");
    }
    else{
      printf("FIRE - Multiple bullets\n");
    }
    return 0;
    }   

   
