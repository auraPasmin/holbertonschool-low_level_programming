#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - print name
  * @name: pointer name
  * @f: pointer a char funtion
  * Return: nothing take a void
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
