#include "repeated_char.h"

/**
 * Confronta due caratteri per capire se contengono la stessa lettera
 * @param [in] c1 primo carattere su cui effettuare un confronto
 * @param [in] c2 secondo carattere su cui effettuare un confronto
 * @return true se i due caratteri contengono la stessa lettera (maiuscola o minuscola)
 * infatti questa funzione non è case-sensitive, perciò ad esempio
 * i caratteri 'A' e 'a' devono essere considerati la stessa lettera
*/
bool is_same_letter(char c1, char c2) {
    return false; // Modificare se necessario
}

/**
 * Conta il numero di coppie di caratteri adiacenti ripetuti nella stringa
 * @param [in] str stringa da analizzare all'interno della funzione
 * @return numero di coppie di caratteri adiacenti ripetuti nella stringa in input
 * Due caratteri sono adiacenti se uno dei due si trova immediatamente
 * prima o dopo l'altro all'interno della stringa in input
 * Due caratteri sono ripetuti se contengono la stessa lettera sia essa minuscola o maiuscola
 * La funzione deve contare le coppie di caratteri che rispettano entrambi i criteri
 * Ad esempio "Aaa" contiene 2 caratteri adiacenti ripetuti, "alba" non ne contiene nessuno
 * La stringa è composta esclusivamente da lettere o spazi [' ', 'A'-'Z', 'a'-'z'], gli spazi non sono ripetuti
 * L'operazione si conclude una volta raggiunta la fine della stringa ('\0')
**/
int repeated_char(char *str) {
    return 0; // Modificare se necessario
}