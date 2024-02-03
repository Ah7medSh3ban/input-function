#include <stdio.h>

/**
 * @brief  This function can read the white space chararchter and has the way to set the limit for the number
 *          of characters to be stored .
 * @param  number  The number of characters to be stored .
 * @param  string  Pointer to the destination in the memory .
 * @return Number of charachter stored .
 */

int inputfun(char string[], int number)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (i < number)
        {
            string[i++] = ch;
        }

        string[i] = '\n';
    }

    return i;
}