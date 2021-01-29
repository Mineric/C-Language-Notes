#include <stdio.h>
#include <unistd.h>

int main()
{
    int t;
    printf("t = ");
    scanf("%d", &t);

    while(t > 0)
    {
        printf("%d \n", t);
        sleep(1); // sleep(n) function that pause program execution for n seconds
        t -= 1;
    }
    printf("Finished...  \n");
    return 0;
