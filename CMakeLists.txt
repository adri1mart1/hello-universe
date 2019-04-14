cmake_minimum_required(VERSION 2.6)

project(hello-universe)

include_directories(include)

add_executable(hello-universe 
	src/main.c
	src/team_a.c
	src/team_b.c
	src/team_c.c
)

target_link_libraries(hello-universe 
	m
)