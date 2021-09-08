#ifndef _LOGIC_H
#define _LOGIC_H


#include <stdio.h>
#include <math.h>
#include <string.h>


int hexTodec();
int binaryTodecimal(); 
int octalTodecimal(); 
int decTobin();
int decTooctal();
int decTohexa();
int binTohexa(long long int binaryval);
int binary_to_octal(long long int binary);
long long octal_to_binary(long long int octal);
int hexTobin();
#endif