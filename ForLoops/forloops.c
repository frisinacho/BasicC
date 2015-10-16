#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    int y;
    for(int x=0; x<10; x++)
    {
        y = pow(x,2);
        printf("The counter X has the value: %d\n", x);
        printf("X^2 = %d\n", y);
    }
}
