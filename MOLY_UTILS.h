/*
 *

    ╔═══━━━─── • ───━━━═══╗
          MOLY_UTILS.h
    ╚═══━━━─── • ───━━━═══╝

 *
 * BY: Federico Germán Molina
 *
 * Año: 2023
 *
__/\\\________/\\\__/\\\\\\\\\\\\\\\__/\\\\\\\\\\\__/\\\_________________/\\\\\\\\\\\___
__\/\\\_______\/\\\_\///////\\\/////__\/////\\\///__\/\\\_______________/\\\/////////\\\_
___\/\\\_______\/\\\_______\/\\\___________\/\\\_____\/\\\______________\//\\\______\///__
____\/\\\_______\/\\\_______\/\\\___________\/\\\_____\/\\\_______________\////\\\_________
_____\/\\\_______\/\\\_______\/\\\___________\/\\\_____\/\\\__________________\////\\\______
______\/\\\_______\/\\\_______\/\\\___________\/\\\_____\/\\\_____________________\////\\\___
_______\//\\\______/\\\________\/\\\___________\/\\\_____\/\\\______________/\\\______\//\\\__
_________\///\\\\\\\\\/_________\/\\\________/\\\\\\\\\\\_\/\\\\\\\\\\\\\\\_\///\\\\\\\\\\\/___
____________\/////////___________\///________\///////////__\///////////////____\///////////_____
 *
 */

#ifndef MOLY_UTILS_H_
#define MOLY_UTILS_H_

#include "MKL25Z4.h"
#include "stdio.h"
#include "string.h"

#define CLOCK_FREQ 48000000

extern int32_t x, y, z, w;

/*
 * ----------------------------
 * Name: InitAdc_randomizer
 * ----------------------------
 * Initializes the ADC with rand generation purposes
 *
 *  NOTE:
 *      LEAVE THE PORT E 20 DISCONNECTED
 *
 *  Parameters:
 *      range_inbits: Amount of bits that the random number generated will have
 *
 *	returns: void
 */
void InitADC_randomizer(int range_inbits);
/*
 * ----------------------------
 * Name: rand_number
 * ----------------------------
 * Uses the noise of the air in PORT E 20 and some math operations to generate a random number
 * Random number = between 0 and the max length of the bits chosen in the InitADC_randomizer function
 *
 *
 *	returns: a random integer of 32 bits
 */
int32_t rand_number(void);

/*
 * ----------------------------
 * Name: Delay
 * ----------------------------
 * Stops the program for a certain amount of time in milisenconds
 *
 *	Parameters:
 *	    miliseconds: Amount of time to be stopped in miliseconds
 *
 *	returns: void
 */
void Delay(uint32_t milliseconds);

/*
 * ----------------------------
 * Name: CleanVar
 * ----------------------------
 * Erases all value inside the given variable
 *
 *	Parameters:
 *	    *var: Variable to be erased
 *      size: Size in bits of the variable give (USE SIZEOF or STRLEN)
 *
 *	returns: void
 */
void CleanVar(void* var, size_t size);

#endif
