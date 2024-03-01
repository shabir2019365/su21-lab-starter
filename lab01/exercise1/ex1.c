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
    
    //initialize counts to zero
    dna_seq->A_count = 0;
    dna_seq->C_count = 0;
    dna_seq->G_count = 0;
    dna_seq->T_count = 0;

    //To iterate through the each charactor and count them
    char *current_nucleotide = dna_seq->sequence;
    while (*current_nucleotide != '\0') {
    // count nucleotide by using case sensitive coparision
        if (*current_nucleotide == 'A' || *current_nucleotide == 'a') {
        	dna_seq->A_count++;
	}
	
        else if (*current_nucleotide == 'C' || *current_nucleotide == 'c') {
        	dna_seq->C_count++;
	}

        else if (*current_nucleotide == 'G' || *current_nucleotide == 'g') {
        	dna_seq->G_count++;
	}

        else if (*current_nucleotide == 'T' || *current_nucleotide == 't') {
        	dna_seq->T_count++;
	}
	current_nucleotide++;
    } 
    return;
}
