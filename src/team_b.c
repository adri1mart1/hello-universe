#include "team_b.h"
#include "commun.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100
#define MIDDLE_INDEX (MAX_SIZE/2)
#define TOTAL_NB_LETTER 24 // 26-2

char random_letter(int i) 
{

	return (char)i%23 + 99;
}

void GenerateRandomTable(void)
{
	char data_table[MAX_SIZE] = {0};
	int i;
	// char my_variable[10];

	// STEP 1: 
	// prepare table with:
	// from index 00 to 09 --> samples set to 65 ('A')
	// from index 10 to 19 --> samples set to 66 ('B')
	// from index 20 to 29 --> samples set to 65 ('A')
	// ...... etc

	for (i=0; i < MAX_SIZE; i++) {
		if (i < 10) {
			data_table[i] = 65;
		} else if (i < 20) {
			data_table[i] = 66;
		} else if (i < 30) {
			data_table[i] = 65;
		} else if (i < 40) {
			data_table[i] = 66;
		} else if (i < 50) {
			data_table[i] = 65;
		} else if (i < 60) {
			data_table[i] = 66;
		} else if (i < 70) {
			data_table[i] = 65;
		} else if (i < 80) {
			data_table[i] = 66;
		} else if (i < 90) {
			data_table[i] = 65;
		} else {
			data_table[i] = 66;
		}
	}

	// STEP 2: 
	// for the first 20 characters, every 3 letters, i 
	// would like a random letter between 'C' and 'Z'
	char *current;
	current = (char *)&data_table[0];

	for (i=0; i<20; i++)
	{
		if (i%3 == 0) {
			*current = random_letter(i);
		}
		current++; // next digit
	}

	// Final result:
	// We expect something like:
	// xAAyAAzAAtBBuBBfBBdBAAAAAAAAAABBBBBBBBBBAAAAAAAAAABBBBBBBBBBAAAAAAAAAABBBBBBBBBBAAAAAAAAAABBBBBBBBBB
	// Final table:AAAAAAABBYBBBBAAAALAABBBBBBVAAAAAAAATBBBBBBBBJAAAAAABBMBBBBAAAAAAAAAABBBBBBBBBB
	PRINT_TEAM_B("Final table:");
	for (i=0; i<MAX_SIZE; i++) {
		printf("%c", data_table[i]);
	}
	printf("\n");
}

void team_b_actions(void)                               
{
    GenerateRandomTable();
}