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
    //take signal input
    //convert to direction
    //switch case for setting h-bridge for x many seconds

    return 0;
}