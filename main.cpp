
#include <unistd.h>
#include <stdio.h>

int main()
{
    char path[100];
    getcwd(path, 100);
    printf("PATH: %s", path);
    return 0;
}
