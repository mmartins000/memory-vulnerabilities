#include <stdio.h>
#include <stdlib.h>

void wasteMemory(int i) {
	printf("\nMem Addr Allocated: %d", i);
   	double *ptr = (double*) malloc(1000*sizeof(double));
}

int main() {
	int i = 0;
	while(1 == 1) {
		i++;
		wasteMemory(i);
	}
}
