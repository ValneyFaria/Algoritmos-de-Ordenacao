#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
 
int main(int c, char **v) {

    while (--c > 1 && !fork());
    sleep(c = atoi(v[c]));
    printf("%d\n", c);
    wait(0);

    return 0;
}