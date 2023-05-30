#include "main.h"

int create_file(const char *filename, char *text_content){
	int fd, byte_written;

	if (filename == NULL)
		return -1;

	fd = open(filename, O_CREAT|O_WRONLY|O_TRUNC, 0700);

	if (fd == -1)
		return -1;

	if (text_content != NULL){
		byte_written = write(fd, text_content, strlen(text_content));
		if (byte_written == -1)
		{
			close(fd);
			return -1;
		}
	}

	close(fd);

	return 1;
}

		

