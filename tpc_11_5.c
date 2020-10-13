#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define BUF_SIZE 30

int main()
{
    int fds1[2], fds2[2];
    char *str1 = "Hello world!";
    char *str2 = "Hello c!";
    char *str3 = "Hello socket!";
    char buf[BUF_SIZE];
    char *strs[3] = {str1, str2, str3};
    int i;

    pipe(fds1);
    pipe(fds2);

    pid_t  pid = fork();

    if (pid == 0) {
        for (i=0; i<3; i++) {
            write(fds1[1], strs[i], strlen(strs[i])+1);
            read(fds2[0], buf, BUF_SIZE);
            printf("Child output: %s \n", buf);
        }
    } else {
        for (i=0; i<3; i++) {
            read(fds1[0], buf, BUF_SIZE);
            write(fds2[1], strs[i], strlen(strs[i])+1);
            printf("Parent output: %s \n", buf);
        }
    }

}