#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if(argc != 3) {
		fprintf(stderr, "ERROR: Number of parameters should be 2, not %d!\n", argc-1);
		return -1;
	}

	FILE *file = fopen(argv[2], "r");
	if(file == NULL) {
		fprintf(stderr, "ERROR: File %s not found!\n", argv[2]);
		return -2;
	}

	if((strcmp("-c", argv[1])) == 0) {
		unsigned int counter = 0;
		int character;
		while((character = fgetc(file)) != EOF) {
			counter++;
		}
		printf("Count is: %d\n", counter);
	}
	return 0;
}