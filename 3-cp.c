#include "main.h"

#define BUFFER_SIZE 1024

void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
}

int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);

	if(fd_from == -1)
	{
		print_error("Can't read from file", file_from);
		return 98;
	}

	fd_to = open(file_to, O_WRONLY|O_CREAT|O_TRUNC, 066i4);
	if (fd_to == -1){
		print_error("Can' write to file", file_to);
		close(fd_from);
		return 99;
	}

	while ((bytes_read =read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if(bytes_written == -1)
		{
			print_error("Can't write to file", file_from);
			close(fd_from);
			close(fd_to);
			return 99;
		}
	}

	if (bytes_read == -1){
		print_error("can't read from file", file_from);
		close(fd_from);
		close(fd_to);
		return 98;
	}


	if(close(fd_from) == -1)
	{
		print_error("can't close fd", file_from);
		return 100;
	}

	if(close(fd_to) == -1)
	{
		print_error("Can't close fd",  file_to);
		return 100;
	}

	return 0;

}


int main(int argc, char *argv[])
{
	int result;

	if(argc != 3)
	{
		print_error("usage: cp file_from file_to", "");
		return 97;
	}

	result = cp(argv[1], argv[2]);
	return result;
}

