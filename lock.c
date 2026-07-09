#include<stdio.h>
#include <sys/file.h>
#include <unistd.h>

int main() 
{
    int fd = open("data.txt", O_RDWR);

    // Acquire an exclusive lock (blocks until available)
    if (flock(fd, LOCK_EX) == 0)
    {
        printf("File locked exclusively!\n");
        printf("sleeping 15 seconds...!\n");
        // Perform file operations
        sleep(15);
        printf("Done\n");
        flock(fd, LOCK_UN); // Release lock
    }
    close(fd);
    return 0;
}
