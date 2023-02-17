#ifndef __REPEATED_CHAR_H__
#define __REPEATED_CHAR_H__

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// 1. Confronta due caratteri per capire se contengono 
//    la stessa lettera (maiuscola o minuscola)
bool is_same_letter(char c1, char c2);

// 2. Conta il numero di coppie di caratteri adiacenti ripetuti nella stringa
int repeated_char(char *str);

#endif // __REPEATED_CHAR_H__