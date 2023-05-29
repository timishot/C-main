#include <stdio.h>
#include <unistd.h>

int main(void){
	pid_t pid;

	pid = fork(); //Create a new process
	
	if (pid < 0){
		//Fork failed
		perror("fork");
		return 1 ;
	}else if (pid == 0){
		//Child process
		printf("Child process: Hello!\n");
		// Perform child-speccific tasks
		//..
	} else {
		//parent process
		printf("Parent process: Child PID = %d\n", pid);
		// Perform parent-specied tasks
		// ...
	}

	return 0;
}


