#include "residual_stocks.h"

/**
 * Rimuove la parte non intera dal singolo stock in input e restituisce il valore del residuo
 * @param [in] stock puntatore al nodo su cui effettuare l'arrotondamento
 * @return il valore del residuo dovuto all'arrotondamento
 * per calcolare la parte intera utilizzare la funzione floor()
**/ 
double floor_stock(struct Stock* stock) {
    return 0.0; // Modificare se necessario
}

/**
 * Finalizza gli stock in input arrotondando i valori all'interno di ogni 
 * nodo della lista e crea una seconda lista in cui ne salva i residui
 * @param [inout] head puntatore alla testa degli stock da finalizzare
 * @return puntatore alla lista di residui generati dopo aver finalizzato
 * gli stock in input
 * La lista di residui e di stock dovranno avere la stessa lunghezza
 * Se uno stock non presenta residui, inserire un nodo con residuo pari a 0.00
 * Nel caso la lista di stock sia vuota, restituire NULL
**/
struct Stock* residual_stocks(struct Stock *head) {
    return NULL; // Modificare se necessario
}

/**
 * Calcola il totale dei valori presenti nella lista in input
 * @param [in] head puntatore alla testa della lista
 * @return somma totale dei valori presenti nei nodi della lista
**/
double compute_total(struct Stock *head) {
    return 0.0; // Modificare se necessario
}