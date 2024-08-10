#include <unistd.h>

void rush(int x, int y)
{
    int i, ii;
    int j;

    i = 0;
    ii = 0;
    j = 0;
    if(y == 1)
    {
        if(x == 1)
        {
            write(1, "o", 1);
        }
        if(x >= 2)
        {
            write(1, "o", 1);
            while(x-2 > i)
            {
                write(1, "-", 1);
                i++;
            }
            write(1, "o", 1);
        }
    }
    if(y == 2)
    {
        if(x == 1)
        {
            write(1, "o \n o", 5);
        }
        if(x >= 2)
        {
            write(1, "o", 1);
            while(x-2 > i)
            {
                write(1, "-", 1);
                i++;
            }
            write(1, "o", 1);
            write(1, "\n", 1);
            write(1, "o", 1);
            while(x-2 > ii)
            {
                write(1, "-", 1);
                ii++;
            }
            write(1, "o", 1);
        }
    }
    if(y > 2)
    {
        if(x == 1)
        {
            write(1, "o", 1);
            write(1, "\n", 1);
        }
        while (y-2 > j)
        {
            write(1, "|", 1);
            write(1, "\n",1);
            j++;
        }
        while ((x-2 < i) && (y - 2 < j))
        {
            write(1, " ", 1);
            write(1, "\n", 1);
            i++;
        }
        write(1, "o", 1);

    }

}

int main(void)
{
    rush(5, 3);
}