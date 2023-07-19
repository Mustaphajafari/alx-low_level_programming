#include "function_pointers.h"


/**
 * print_name - for printing the name
 * @name: the name that we want to print
 * @f: function pointer
 */


void print_name(char *name, void (*f)(char *))
{


f(name);
}
