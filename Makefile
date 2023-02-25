##
# Roguelike
#
# @file
# @version 0.1

all:
	clang *.c -o main -Wall -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -g -O0

# end
