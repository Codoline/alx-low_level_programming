#include "main.h"
/**
*_isdigit - function is that which  verifies if a  character is a digit or not a digit
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
