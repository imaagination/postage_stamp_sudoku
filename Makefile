# Peter Maag
# 3 December 2011 

all:
	gcc -std=gnu99 postage_stamp_sudoku.c -I. -o postage_stamp_sudoku

solve:
	./postage_stamp_sudoku
