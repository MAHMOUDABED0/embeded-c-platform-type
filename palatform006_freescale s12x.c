/*
 ============================================================================
 Name        : c.c
 Author      : mahmoud abed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//palatform006_freescale s12x
#include <stdio.h>
#include <stdlib.h>
#define cpu_type         cpu_type_16
#define cpu_BIT_ORDER    LES_FIRST
#define cpu_BYTE_ORDER    HIGH_BYTE_FIRST

typedef unsigned char        boplean;
typedef signed char          sint_8;
typedef unsigned char        uint_8; 
typedef signed short          sint_16;
typedef unsigned short         uint_16;
typedef signed long          sint_32;
typedef unsigned long        uint_32;

typedef signed char          sint_8_least;
typedef unsigned char        uint_8_least;
typedef signed short          sint_16_least;
typedef unsigned short         uint_16_least;
typedef signed long          sint_32_least;
typedef unsigned long        uint_32_least;

typedef float                float32;
typedef double                double32;




int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
