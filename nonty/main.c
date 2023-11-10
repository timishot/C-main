#include "monty.h"



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
	line_number = 1;

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
			}else if(strcmp(opcode, "pint")==0){
				pint();
			}else if(strcmp(opcode, "pop")==0){
				pop();
			}else if(strcmp(opcode, "swap")==0){
				swap();
			}else if(strcmp(opcode, "add") == 0){
				add();
			}else if(strcmp(opcode, "nop")== 0){
				nop();
			}else if(strcmp(opcode, "sub")== 0){
				sub();
			}else if(strcmp(opcode, "div1")== 0){
				div1();
			}else if(strcmp(opcode, "mul")==0){
				mul();
			}else if(strcmp(opcode, "mod")==0){
				mod();
			}else if (strcmp(opcode, "pchar")==0){
				pchar();
			}else if(strcmp(opcode, "pstr")==0){
				pstr();
			}
		}
	}

	

	fclose(file);

	return 0;
}