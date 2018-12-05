#include <stdlib.h>
#include <stdio.h>

#define PRINT(team, fmt, ...) (printf(team), printf(fmt, ##__VA_ARGS__))
#define PRINT_TEAM_A(fmt, ...) PRINT("[team-A] ", fmt, ##__VA_ARGS__)
#define PRINT_TEAM_B(fmt, ...) PRINT("[team-B] ", fmt, ##__VA_ARGS__)
#define PRINT_TEAM_C(fmt, ...) PRINT("[team-C] ", fmt, ##__VA_ARGS__)
