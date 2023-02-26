#include <stdio.h>

/**
 * main -starting point
 * creating a function that is use ti read data from a file
 * return (0)
 */

typedef struct{
	int id;
	char name[20];
	float score;
} students;

int main(void) {
	students students[5];
	FILE *fin = fopen("student.bin", "rb");

	if (fin == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}

	int num_elements = fread(students, sizeof(students), 5, fin);

	fclose(fin);

	printf("Read %d students from file:\n", num_elements);
	for (int i=0; i< num_elements; i++)
	{
		printf("ID %d, Name:%s, score: %.2f\n", students[i].id, students[i].name, students[i].score);
	}

	return 0;

}
