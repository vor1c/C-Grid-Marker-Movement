#include <stdio.h>

int main()
{
    int feld[8][8];

    int i = 0;
    int j = 0;

    int x = 0;
    int y = 0;

    char input;

    while (1)
    {
        // clean
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                feld[i][j] = 0;
            }
        }
        // set 1
        feld[x][y] = 1;
        // draw
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                printf("|");
                if (feld[i][j] != 0)
                {
                    printf("1");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("|\n");
        }
        // get input
        printf("Dein zug: \n");
        input = getchar();
        getchar();

        if (input == 'w')
        {
            x--;
        }
        if (input == 'a')
        {
            y--;
        }
        if (input == 's')
        {
            x++;
        }
        if (input == 'd')
        {
            y++;
        }
        if (input == 'x')
        {
            break;
        }

        if (y > 7)
        {
            y = 0;
        }
        if (y < 0)
        {
            y = 7;
        }
        if (x > 7)
        {
            x = 0;
        }
        if (x < 0)
        {
            x = 7;
        }
    }
    return 0;
}