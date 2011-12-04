# Peter Maag
# 3 December 2011 

all: postage_stamp_sudoku.c board.h
	gcc -std=gnu99 postage_stamp_sudoku.c -I. -o postage_stamp_sudoku

solve: all
	./postage_stamp_sudoku
