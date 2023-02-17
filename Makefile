##
# Roguelike
#
# @file
# @version 0.1

all:
	clang main.c -o main -Wall -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# end
