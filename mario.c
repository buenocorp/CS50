#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        printf("height -> ");
        h = GetInt();
    }
    while (h < 0 || h > 23);

    int i, j, k;
    for(i = 0; i < h; i ++)
    {
        for(j = h - 1; j > i; j --) 
        {
            printf(" ");
        }
        
        printf("#");
        for(k = 0; k < i; k ++) 
        {
            printf("#");
        }
        printf("#");
        printf("\n");
    }
}
