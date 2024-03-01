// Muhammad Shabir Khan - Exercise1 - 1st March 2024
#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
	int count = 0;
	while (*str != '\0') {  // Implement the num occurance by 2nd method using a null terminator to iterate all over the string
		if (*str == letter){ //string will check if the letter is matched or not
			count++;
		}
		str++;
	}
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    /* TODO: implement compute_nucleotide_occurances */
    return;
}
