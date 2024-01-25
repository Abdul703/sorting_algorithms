/**
 * swap_int - swap 2 integers using pointer
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int initial_a;

initial_a = *a;
*a = *b;
*b = initial_a;
}
