#ifndef CODE_H
#define CODE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct {
    int status;
    int err_num;
    char **argv;
}info_t;

int _myexit(info_t *shell);

#endif /*CODE_H*/