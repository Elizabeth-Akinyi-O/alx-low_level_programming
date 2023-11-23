#include "main.h"
/**
 *get_endianness - checks the endianness
 *
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	int show_byte;

	show_byte = (int) (((char *)&i)[0]);
	return (show_byte);
}
