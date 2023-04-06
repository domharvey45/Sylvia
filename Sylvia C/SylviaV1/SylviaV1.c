#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct movementDetails
{
    bool transistors[8];                                                         //configure high and low H-bridge states
    char name[20];
};

int main()
{
    // START UP //
    struct movementDetails forwards, backwards, clockwise, aClockwise;          //generate direction structures for configuring the h-bridge
    forwards.transistors[0] = 1;
    forwards.transistors[3] = 1;
    forwards.transistors[4] = 1;
    forwards.transistors[7] = 1;
    strcpy(forwards.name, "Forwards");

    backwards.transistors[1] = 1;
    backwards.transistors[2] = 1;
    backwards.transistors[5] = 1;
    backwards.transistors[6] = 1;
    strcpy(backwards.name, "Backwards");

    clockwise.transistors[0] = 1;
    clockwise.transistors[3] = 1;
    clockwise.transistors[5] = 1;
    clockwise.transistors[6] = 1;
    strcpy(clockwise.name, "Clockwise");
    
    aClockwise.transistors[1] = 1;
    aClockwise.transistors[2] = 1;
    aClockwise.transistors[4] = 1;
    aClockwise.transistors[7] = 1;
    strcpy(aClockwise.name, "Anticlockwise");

    // LOOPING //
    //RECEIVER INPUT CONFIGURATION
    int goFlag = 1;
    char dirInput[1];

    while (goFlag == 1)
    {
        printf("\nPlease input WASD direction (Break using Q): ");
        scanf("%s", dirInput);

        if (strcmp(dirInput, "w") == 0)
        {
            printf("%s", forwards.name);
            //pin config
        }

        else if (strcmp(dirInput, "a") == 0)
        {
            printf("%s", aClockwise.name);
            //pin config
        }

        else if (strcmp(dirInput, "d") == 0)
        {
            printf("%s", clockwise.name);
            //pin config
        }

        else if (strcmp(dirInput, "s") == 0)
        {
            printf("%s", backwards.name);
            //pin config
        }

        else if (strcmp(dirInput, "q") == 0)
        {
            printf("Exiting...");
            goFlag = 0;
        }
    }
    return 0;
}