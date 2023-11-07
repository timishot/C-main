#include "monty.h"


/**
 * Implementation of stack using array
 * 
**/

#define STACK_SIZE 100
int top = -1;
int stack[STACK_SIZE];
/**
 *  push - Function to push element into a stack
 *  @x: element to put into the stack
**/

void push(int x){
	if(top == STACK_SIZE-1){
		fprintf(stderr, "Stack Overflow\n");
	}else{
		top++;
		stack[top] = x;
	}
}

void pall(){
	int i;
	
	if (top == -1){
		return;
	}

	for (i = top; i >= 0; i--){
		printf("%d\n", stack[i]);
	}	
}

int main(int argc, char *argv[]){
	char line[100];
	int num = argc;
	int line_number;
	FILE *file;
	if (num != 2) {
    		fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
    		return EXIT_FAILURE;
	}
	file = fopen(argv[1], "r");
	line_number = 0;

	if (file==NULL){
		perror("Unable to open file");
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file))
	{
		char opcode[10];
		int arg;
		line_number++;

		if (sscanf(line, "%s %d", opcode, &arg) == 2){
			if (strcmp(opcode, "push") == 0){
				push(arg);
			} else {
				fprintf(stderr, "L%d: Invalid instruction format: %s\n", line_number, line);
				exit(EXIT_FAILURE);
			}
		}else if (sscanf(line, "%s", opcode) == 1){
			if (strcmp(opcode, "pall") == 0){
				pall();
			}
		}
	}

	fclose(file);

	return 0;
}