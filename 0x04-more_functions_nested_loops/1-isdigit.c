#include "main.h"

/**
 *_isdigit - entry point
 * @c: value received
 *  Return - Always 0
 */

int _isdigit(int c)
{
    if (c >= 0 && c <= 9 )
    {
        return (1);
    }
    else
    {
        return(0);
    }

}
