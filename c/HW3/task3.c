#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(void){
	
	char buf[512];
	
	int n;
	
	symlink("unix.txt", "unix.sym");
	
	n = readlink("unix.sym", buf, 512);
	
	if (n == -1) {
		perror("readlink");
		return 0;
	}
	
	buf[n] = '\0';
	printf("unix.sym : Readlink = %s\n", buf);
	
}