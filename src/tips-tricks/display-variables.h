#pragma once
#include "helper.h"
 
void RobotLine::radionica() {
static int i = 0;
char i_char[10 + sizeof(char)];

if (front() < 100)
    i++;

sprintf(i_char,"%d", i);

display(i_char);
delayMs(500);

}