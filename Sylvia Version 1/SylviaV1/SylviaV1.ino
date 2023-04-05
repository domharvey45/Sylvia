#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//function prototypes

struct movementDetails
{
    bool transistors[8];                                                         //configure high and low H-bridge states
    char name[20];
};

void setup() {
  // put your setup code here, to run once:

  // START UP
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

}

void loop() {
  // put your main code here, to run repeatedly:

  // READ MAP AND CONVERT INTO INSTRUCTIONS
  // Establish next position angle
  // Angle to time conversion
  // write direction and time
  // Establish next position distance
  // Distance to time conversion
  // write
  // Direction Control select correct movement

}
