#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
int main(int argc, char *argv[]){
    if(strcmp(argv[1],"user")==0){
        char buff[256];
        fgets(buff, 256, stdin);
    }
    return 0;
}
