#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
//#include <string.h>
//#include <stdio.h>
int main(int argc, char *argv[])
{
    char str[100], chTemp;
    int i, j, len;
    int fptr = open("sort_string.txt", O_RDWR);
    len = strlen(*argv);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(argv[j]>argv[j+1])
            {
                chTemp = *argv[j];
                *argv[j] = *argv[j+1];
                *argv[j+1] = chTemp;
            }
        }
    }
    write(fptr, argv, len);
    return 0;
}