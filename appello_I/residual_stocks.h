#ifndef __RESIDUAL_STOCKS_H__
#define __RESIDUAL_STOCKS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Struttura dati che rappresenta uno stock 
// come un nodo di una lista concatenata
struct Stock {
    double value;
    struct Stock* next;
};

// 1. Rimuove la parte non intera dal singolo stock 
//    in input e restituisce il valore del residuo
double floor_stock(struct Stock* stock);

// 2. Finalizza gli stock in input arrotondando i valori all'interno di ogni 
//    nodo della lista e crea una seconda lista in cui ne salva i residui
struct Stock* residual_stocks(struct Stock *head);

// 3. Calcola il totale dei valori presenti nella lista in input
double compute_total(struct Stock *head);

#endif // __RESIDUAL_STOCKS_H__