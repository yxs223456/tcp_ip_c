#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#define BUF_SIZE 30

void alarm_(int sig) {
    printf("Input message");
}

void sigint_(int sig) {
    char buf[BUF_SIZE];
    fgets(buf, BUF_SIZE, stdin);
    if (!strcmp(buf, "Y\n") || !strcmp(buf, "y\n")) {
        printf("程序结束");
        exit(1);
    }
}

int main(int argc, char *argv[])
{
    signal(SIGALRM, alarm_);
    signal(SIGINT, sigint_);
    alarm_(1);

    for (int i=0; i<10; i++)
    {
        puts("wait...");
        sleep(100);
    }

    return 0;
}