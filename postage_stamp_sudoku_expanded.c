// Peter Maag
// 2 October 2010
#include <board.h>
#define r return
#define f for
int i,j,c,w,t,z;
void printBoard() {
	f (i = 0; i < 81; i++) {
		(i+1) % 9 ? printf("%2d",b[i]) : printf("%2d\n",b[i]); 
	}
}

int checkRow(int s) {
	z = (s/9)*9;
	f (i = z; i < z+9; i++) if (i != s) if (b[i] == b[s]) r 0;
	r 1;
}

int checkCol(int s) {
	f (i = s % 9; i < 81; i += 9) if (i != s) if (b[i] == b[s]) r 0;
	r 1;
}

int checkBox(int s) {
	c = s % 9 - s % 3;
	w = (s/9) - (s/9) % 3;
	f (i = 0; i < 3; i++) f (j = 0; j < 3; j++) {
			t = (w + i) * 9 + c + j;
			if (t != s) if (b[t] == b[s]) r 0;
		}
	r 1;
}

int checkBoard(int s) { 
	r checkRow(s) && checkCol(s) && checkBox(s);
}

void enumerate(int s) {
	while (b[s] < 9) {
		b[s]++;
		if (checkBoard(s)) {
			f (i = s; i < 81 && b[i] !=0; i++) {}
			i == 81 ? printBoard() : enumerate(i);
		}
	}
	b[s] = 0;
}

int main() {
	f (i = 0; i < 81 && b[i] != 0; i++) {}
	i == 81 ? printBoard() : enumerate(i);
}
