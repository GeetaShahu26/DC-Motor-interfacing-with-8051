#include <reg51.h>

// Switch inputs
sbit SW1 = P2^0;     // Clockwise switch
sbit SW2 = P2^1;     // Anticlockwise switch

// Motor control outputs
sbit M1 = P1^0;
sbit M2 = P1^1;

void main()
{
    P2 = 0xFF;   // Make Port2 as input
    P1 = 0x00;   // Make Port1 as output

    while(1)
    {
        if(SW1 == 0)        // Switch1 pressed
        {
            M1 = 1;
            M2 = 0;         // Clockwise rotation
        }

        else if(SW2 == 0)   // Switch2 pressed
        {
            M1 = 0;
            M2 = 1;         // Anticlockwise rotation
        }

        else
        {
            M1 = 0;
            M2 = 0;         // Motor Stop
        }
    }
}