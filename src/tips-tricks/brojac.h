#pragma once
#include "helper.h"
 
void RobotLine::radionica() {
    static int i = 0;
	uint8_t red[8];
	uint8_t green[8];

    for (uint8_t i = 0; i < 8; i++)
		red[i] = 0;
	
	green[0] = 0b01111110;
	green[1] = 0b01000010;
	green[2] = 0b01000010;
	green[3] = 0b01000010;
	green[4] = 0b01000010;
	green[5] = 0b01000010;
	green[6] = 0b01000010;
	green[7] = 0b01111110;

	store(red, green, 0);
	for (uint8_t i = 0; i < 8; i++)
		red[i] = 0;
	
	green[0] = 0b00001000;
	green[1] = 0b00011000;
	green[2] = 0b00101000;
	green[3] = 0b01001000;
	green[4] = 0b00001000;
	green[5] = 0b00001000;
	green[6] = 0b00001000;
	green[7] = 0b00111110;

	store(red, green, 1);

    for (uint8_t i = 0; i < 8; i++)
    red[i] = 0;
	
	green[0] = 0b00111100;
	green[1] = 0b01000010;
	green[2] = 0b00000010;
	green[3] = 0b00011100;
	green[4] = 0b00100000;
	green[5] = 0b01000000;
	green[6] = 0b01000000;
	green[7] = 0b00111110;

	store(red, green, 2);

    if (front() < 100)
        i++;

	display(i);
    delayMs(1000);
}