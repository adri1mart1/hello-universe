#include "team_a.h"
#include "commun.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// This is my magique structure with the 4 needed arguments
// I have 1024 bytes available in memory so i can store
// 48S instances of this structure in flash. (1024 / (1+4+16=21) = 48.7)
#define MAX_MEMORY_SIZE 1024
#define MAX_MAGIC 48

typedef struct {
	char c;			// 1 byte
	int i;			// 4 bytes
	char str[16];	// 16 bytes
} m_magic_t;

void CheckMagicTable(void)
{
	m_magic_t magic_table[MAX_MAGIC];
	// int j = 0;

	void *start_ptr, *end_ptr;
	int nb_bytes_used;

	start_ptr = &(magic_table[0].c);
	end_ptr = &(magic_table[MAX_MAGIC-1].str[15]);
	nb_bytes_used = (int)((end_ptr - start_ptr)+1);

	// PRINT_TEAM_A("start_ptr:%p end_ptr:%p\n", start_ptr, end_ptr);
	// PRINT_TEAM_A("total bytes used in memory:%d\n", nb_bytes_used);


	// !!!!!!! This part should not be changed !!!!!!!!
	if (nb_bytes_used > MAX_MEMORY_SIZE) {
		PRINT_TEAM_A("Error: nb_bytes_used (%d) > MAX_MEMORY_SIZE (%d)\n", nb_bytes_used, MAX_MEMORY_SIZE);
	} else {
		PRINT_TEAM_A("Great ! Team_a make it working !\n");
	}
}

void team_a_actions(void)                        
{
    CheckMagicTable();
}
