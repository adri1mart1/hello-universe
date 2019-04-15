#include "team_c.h"
#include "commun.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define PI 3.141592f
#define NAME_LENGTH 12

typedef struct {
	char name[NAME_LENGTH];
	float pi;
	float diameter;
} m_circle_properties_t;

void TransformPINumber(void)
{
	m_circle_properties_t circle;
	// int j = 0;
	circle.pi = PI;

	strncpy(circle.name, "jean-pierre", NAME_LENGTH);
	circle.name[NAME_LENGTH-1] >> 5;
	printf(sizeof(circle.pi));

	// !!!!!!! This part should not be changed !!!!!!!!
	if (circle.pi == PI) {
		PRINT_TEAM_C("Great ! Team_c make it working !\n");
	} else {
		PRINT_TEAM_C("Error: pi_number is not equal to PI\n");
	}
}

void team_c_actions(void)                                  
{
    TransformPINumber();
}
