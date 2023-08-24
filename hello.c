/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

/* Hello World */

// PID: 730723179
// I pledge the COMP530 honor code.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <dirent.h>

int main()
{
    // Your code here
    
    // Exercise 0
    printf("hello, welcome to comp 530!\n");
    
    // Exercise 1
    int pid=0;
    pid = getpid();
    printf("%d\n",pid);
    
    // Exercise 2
    int size=100;
    char dir[size];
    getcwd(dir,size);
    printf("%s\n",dir);

    return EXIT_SUCCESS;
}
