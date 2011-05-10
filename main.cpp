
#include <unistd.h>
#include <stdio.h>

int main()
{
    char path[100];
    getcwd(path, 100);
    printf("\n\nPATH: %s\n\n", path);
    return 0;
}
