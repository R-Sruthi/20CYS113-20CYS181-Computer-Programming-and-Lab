#include <stdio.h>


// Date: 04 May 2023

int main()
{
    int i, j, m = 6, n = 20;
    char name[72][35];

    /* Input data in matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

            scanf("%c", &name[i][j]);


        }
    }

    /* Display the matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {

        printf("%c", name[i][j]);

        }
        printf("\n");
    }

    return 0;
}