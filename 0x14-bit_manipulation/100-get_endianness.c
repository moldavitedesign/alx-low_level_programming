#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
    int num = 1;
    char *endian_check = (char *)&num;
    if (*endian_check == 1)
    {
        return 1; // little endian
    }
    else
    {
        return 0; // big endian
    }
}

