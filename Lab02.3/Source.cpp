#include<stdio.h>
int main()
{
    int x, k, y;
    scanf_s("%d", &k);
    for (x = 1; x <= k; x++)
    {
        for (y = 1; y <= k; y++)
        {
            if (x == 1 || x == k)
            {
                printf("*");
            }
            else if (y == 1 || y == k)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}