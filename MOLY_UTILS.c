/*
 *

	╔═══━━━─── • ───━━━═══╗
		 MOLY_UTILS.h
	╚═══━━━─── • ───━━━═══╝

 *
 * BY: Federico Germán Molina
 *
 * Año: 2023
═══════════════════════════════════════════════════════════════════════════════════
⠀⠀⠀⠀⠄⠄⠠⠱⡐⢌⠢⡊⠲⣄⠀⠀⠀⠀⠀⠀⣀⡘⠤⣅⠳⠋⣁⣴⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣴⣠⣀⠀⢄⢔⠅⠀⣼⠕⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠢⡀⠠⡀⠑⠝⡳⣄⣀⠤⣒⣭⣷⣿⣿⣵⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣊⠀⢸⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠒⠀⠐⠙⠄⠊⠢⣲⡄⠀⡠⣪⣵⣾⣿⣿⡟⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⣿⡿⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠁⠐⡐⠠⡀⠄⠀⠀⠀⢐⠔⣩⣾⣿⣿⣿⣿⣟⣾⣿⡟⡟⣻⣅⣿⣼⣼⣽⣎⣿⣦⣽⣾⣾⣗⣷⣮⣻⣿⣿⣿⣿⣿⣿⣟⣿⣷⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⢐⢀⢀⠨⢣⡚⠤⠔⣡⣾⣿⣿⡿⣻⣿⣿⣻⣿⣵⣷⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢄⢄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠄⠀⢀⠀⠐⣯⠊⣼⣿⠿⠹⣳⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡁⡑⢀⠀⠀⠀⠀⠀
⠀⠀⠀⢢⣀⠀⢀⡾⡑⠐⢝⣢⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣗⣿⡿⣷⢹⣿⣿⣫⢟⣟⣿⣯⣿⣟⣿⣿⣾⣕⣿⣻⣿⣽⣿⣿⣻⣞⣽⣻⣿⣿⡄⠄⠑⠀⠀⠀⠀
⠀⠀⠀⠀⠈⢫⢝⡴⢁⣾⣿⣿⣿⣿⣿⣿⣿⡏⢸⣿⣿⣿⣿⣿⣺⣟⣿⠀⣿⣿⣿⠏⡞⣿⣿⣿⣿⣻⣿⣿⣿⣯⣗⣿⡿⣿⣟⣿⣽⣾⣷⣟⣽⣿⡌⡀⠈⡄⠀⠀
⣀⠀⠀⠢⢠⠎⠼⣡⣾⣿⣿⣿⣿⣷⣿⣿⣿⡇⢸⣿⣿⣯⠺⣗⣝⡩⣻⡆⢸⣿⣾⣄⣘⣼⣯⣿⣵⢭⣻⣿⣵⣽⣯⣾⣟⣝⡭⣯⣿⣕⣿⢯⣛⢵⣽⣲⣄⡀⠀⠀
⠀⠙⠯⡑⠛⠚⡆⣿⣿⣿⣿⣿⣿⣿⡟⣿⣿⡧⠙⣿⣿⣿⡝⣿⣪⣟⣽⡏⠉⣿⡟⡄⢀⣘⣼⣿⡿⣾⢿⣻⣟⣯⢿⣧⣿⣮⣟⣟⣽⣫⣟⣟⣽⣻⢿⣟⡽⢮⠳⣴
⠀⠀⢠⡝⣯⠁⣧⣿⣿⣿⣿⣿⣿⣿⠇⣸⣟⡾⡊⢱⢿⡾⡪⢿⣕⣪⣦⣧⣴⡿⣿⢿⣟⡿⣽⣞⠿⠽⠿⢻⣞⣯⡿⡿⣷⢷⢯⡺⣝⣵⢿⡾⣞⣵⢿⣮⢦⡉⠉⠁
⠀⠀⡌⣧⡇⠈⣿⣿⣿⣽⣿⣿⣿⣿⡨⠐⢿⣵⣣⣤⣯⡿⣿⢿⣟⣿⣻⣽⡾⢿⣽⢿⠎⢉⡇⠀⢠⣤⣄⠀⢸⣿⣽⡿⣽⣫⡿⣽⢽⣪⢾⣽⡽⣪⢾⡷⣯⣫⢦⠠
⠀⠀⡇⣿⠃⡐⡗⣿⣿⣿⣿⣿⣿⣿⡶⣿⣻⣟⣯⡿⠾⠝⠛⢻⠈⠙⣷⡿⠀⠀⢻⡏⠀⣼⡇⠀⢸⣯⠟⠀⣸⣟⣾⡯⢷⣝⣽⣪⢞⡕⣽⣺⣚⡵⡝⢾⣲⡿⢽⢳
⠀⠀⡇⣿⡅⡄⡏⢻⣿⣿⣯⣿⣟⣾⡝⠃⢹⣻⢾⠀⠀⠶⠚⢻⣧⠀⠘⠁⢰⡄⠀⠀⣰⡿⡖⢀⣈⣠⣤⣾⢯⣟⣾⣗⣻⡪⣞⣿⢵⡪⣮⣕⢵⣻⡾⣓⣝⣮⣞⡵
⠀⠀⢇⢹⣏⠂⡗⡼⣿⣿⣿⣼⡿⣞⡇⠀⢸⣟⡿⠀⠀⣴⠶⢾⡽⣧⠀⢀⣿⣻⣤⣴⢿⣽⢿⣻⣯⣟⠾⠽⣛⢯⡟⡣⣿⠕⢯⣻⣯⠕⣹⠬⣏⡷⣷⣩⣏⢿⣿⢮
⠀⠀⠘⡄⢻⡄⡇⢇⡿⣞⢹⢾⣽⣟⣧⠀⠘⠛⢹⣁⣀⣤⣤⣾⣻⣽⢿⣻⢷⣻⢽⢾⠛⠛⠉⠉⠂⠑⠀⣰⠡⣿⢴⠵⢸⡯⡂⢽⣿⣮⣣⢒⢙⣪⠻⣷⡍⢼⣿⡆
⠀⠀⠀⠀⢂⣝⠐⠸⣹⡿⣽⣿⣟⣾⣽⡶⣶⢿⣻⣟⣯⣟⠷⠯⠓⠛⠉⠉⠈⠄⠀⠀⢂⡀⠀⠀⠀⡠⠨⢁⡞⣼⢁⢃⠕⢗⠄⣺⣿⣿⣴⢫⠪⢹⡕⠹⣎⢒⣿⣿
⠀⠀⠀⠄⡠⠃⠠⢰⣿⡇⣿⣿⣟⣾⣷⡿⠋⠛⠋⠉⠀⠀⠂⢀⠄⠒⢀⣩⣭⣶⢶⣤⡸⠀⠀⠀⠀⢐⠕⠋⢠⠇⠎⢀⣘⣣⡌⢼⢿⣿⣿⠘⠕⠹⢣⠔⠝⣼⣿⢻
⣄⣀⠄⢊⠴⠀⠴⠿⣿⡇⣿⢻⢱⣔⠈⢇⠀⠶⠀⠀⠀⠀⠀⢾⣿⡿⣿⣿⣿⠟⠛⢛⢳⠀⠀⠐⡨⠀⠁⠀⡞⡌⢰⣿⠋⢹⢼⣸⡿⣿⣿⡧⡧⢒⠐⠫⠂⠙⡛⠈
⠁⠈⠉⢰⠅⠠⠯⡬⢽⡇⣿⠸⣼⣿⣷⣤⡢⡀⠀⠀⠈⡀⠀⠘⣿⣿⣿⠋⠀⡀⠜⠈⢻⠀⠀⠁⠀⠀⡀⢰⠣⣠⣿⣿⣷⣾⢸⣾⣷⢻⠻⣧⣿⡄⠢⢐⠑⠌⡊⠔
⠀⠀⠀⣸⠀⣼⠄⣕⠸⢁⢳⠀⣿⣿⣯⣿⣿⡍⠑⢂⠀⢔⡄⠀⠈⢿⡃⠄⢈⠊⠀⢠⢇⡆⠀⠀⠀⠈⠁⡸⠎⣼⠓⣿⣿⡏⣼⡿⣿⢫⣇⢹⠃⣷⡔⠠⠀⠀⢄⠈
⠀⠠⠀⢰⠀⡿⠀⠊⠀⠊⡬⡄⣿⣿⢻⣿⠹⣿⣦⡐⢁⠔⡲⠒⣌⠁⠀⠂⡑⢀⠘⠙⠐⠀⠀⠀⠀⣠⣾⣷⠀⡏⢀⣿⣿⢣⣿⣧⠽⡦⡸⡄⠀⡿⣷⡀⠀⠀⡠⡁
⠀⠀⠀⢀⢆⠃⢂⢠⡂⠈⢐⡐⡸⣿⣿⡿⠦⠽⠿⠉⢀⣁⣀⡴⠂⠣⠤⠸⡚⠒⠈⠓⢥⠀⢀⣴⣿⣿⠃⡇⠀⡅⠈⣿⣯⣿⣯⣿⣆⠘⢄⠘⢄⠋⣿⠵⠁⠀⠀⡇
⠀⠀⠀⣀⠥⠛⠒⠉⠐⠚⠤⣙⠦⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠃⠙⢁⠕⠒⠒⠒⠛⢠⣿⣿⡿⠁⠀⢡⡀⡇⠐⢻⣿⡿⡙⣼⣿⣦⣡⢀⠈⠑⢇⡒⡆⠀⠁⠃
⠀⣠⠞⠁⠀⠀⠀⣀⠤⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠐⠳⢶⣶⣶⣶⣿⣿⣿⠟⠀⠀⠠⠊⠡⣿⡀⠘⢿⠃⠻⣿⢿⣿⣿⡇⠱⠀⢊⢆⡁⠀⠌⠀
⡴⠁⠀⠀⡠⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⡲⣠⠄⡀⠈⠉⠛⠋⢹⠋⠀⢀⠔⠠⠁⠈⢿⣧⡈⠈⢢⠐⠈⢊⢿⣿⡇⣸⡀⢸⡸⢹⡄⠀⠀
⠀⠀⠀⡜⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠞⢙⡿⡥⢓⢎⠡⡴⢒⡀⠁⠀⠠⠂⠠⠁⠀⠀⠀⠙⢿⡶⢲⣣⢆⡄⡹⢋⣴⣿⡇⡸⠔⠁⢰⠠⠀
⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡠⠤⠒⢉⣠⣶⣕⣋⡧⠮⠽⠥⣾⣮⣔⡑⢢⢄⡐⠀⠀⠀⠀⠀⠀⠀⠈⠙⠀⢯⢳⡄⠼⠿⠟⠓⠭⠴⢄⡈⠀⠀
⠀⢀⠃⠀⠀⠀⠀⠀⠀⠀⠀⢰⣀⡀⣤⣐⢩⠄⣲⠶⢮⡽⠛⠍⠑⠒⠂⠉⠉⠁⠈⠉⠉⠉⠙⠓⠂⠨⠗⣒⣖⣲⣒⣖⡠⠭⢉⣀⡇⣱⡀⠀⠀⠀⠀⠀⠀⠈⠐⠠
⠀⠌⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⡔⣨⡾⠒⢉⠥⠒⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠈⠑⠢⢄⡀⠁⠓⠩⢊⠦⣕⡱⢢⢀⠀⢀⡀⠀⠀⠀
═══════════════════════════════════════════════════════════════════════════════════
 */

#include "MOLY_UTILS.h"

void Delay(uint32_t milliseconds)
{
	// Calculate the number of iterations required for the given delay
	// Assuming a 48 MHz clock, each iteration takes 1 / 48,000,000 seconds.
	// Modify the constant CLOCK_FREQ to the adecuate clock frequency of your actual microcontroller
	// So, the number of iterations needed for a delay of milliseconds is:
	uint32_t iterations = (uint32_t)((uint64_t)milliseconds * CLOCK_FREQ / 10000);

	// A simple loop to create the delay
	for (uint32_t i = 0; i < iterations; i++)
	{
		volatile uint32_t dummy = 0; // Volatile variable to prevent the loop from being optimized out
	}
} /////////// END OF Delay FUNCTION

int32_t x = 0;
int32_t w = 0;
int32_t y = 0;
int32_t z = 0;

void InitADC_randomizer(int range_inbits)
{
	switch (range_inbits)
	{
	case 8:
		range_inbits = 0b00;
		break;
	case 12:
		range_inbits = 0b01;
		break;
	case 10:
		range_inbits = 0b10;
		break;
	case 16:
		range_inbits = 0b11;
		break;
	}
	// Activo el modulo del ADC
	SIM_SCGC6 |= SIM_SCGC6_ADC0_MASK;
	// Registros del ADC
	// ADC0_CFG1 = 0b11010000; //Low power, fBus / 4, Long sample, ADC de range_inbits bits, bus clock (la fmax del ADC son 6MHz en este caso)
	ADC0_CFG1 = ADC_CFG1_ADLPC_MASK | (0b10 << ADC_CFG1_ADIV_SHIFT) |
				ADC_CFG1_ADLSMP_MASK | (range_inbits << ADC_CFG1_MODE_SHIFT) |
				(0 * ADC_CFG1_ADICLK_MASK);
	// ADC0_CFG2 = 0b00100; //Canales A, asynchronous clock disabled, highspeed, longest sample
	ADC0_CFG2 = (0 * ADC_CFG2_MUXSEL_MASK) |
				(0 * ADC_CFG2_ADACKEN_MASK) | ADC_CFG2_ADHSC_MASK |
				(0 * ADC_CFG2_ADLSTS_MASK);
	// ADC0_SC2 = 0b000000000; //Compare function disabled, DMA is disabled
	ADC0_SC2 = 0;
	// ADC0_SC3 = 0b000000000; // uncalibrated, only one conversion, hardware average disabled.
	ADC0_SC3 = (0 * ADC_SC3_ADCO_MASK) | (0 * ADC_SC3_AVGE_MASK) |
			   (0 * ADC_SC3_AVGS_MASK);

	ADC0_SC1A = (0 * ADC_SC1_AIEN_MASK) | (0 * ADC_SC1_DIFF_MASK) | ADC_SC1_ADCH(0); // PTE20

	x = ADC0_RA * 1;
	y = ADC0_RA * 2;
	z = ADC0_RA * 3;
	w = ADC0_RA * 4;
} /////////// END OF InitADC_randomizer FUNCTION
int32_t rand_number()
{
	int32_t t;
	x = ADC0_RA * 1;
	y = ADC0_RA * 2;
	z = ADC0_RA * 3;
	w = ADC0_RA * 4;
	t = (x ^ (x << 11));
	x = y;
	y = z;
	z = w;
	w = (w ^ (w >> 19)) ^ (t ^ (t >> 8));
	return w;
} /////////// END OF rand_number FUNCTION

void CleanVar(void *var, size_t size)
{
	memset(var, 0, size);
} /////////// END OF CleanVar FUNCTION
