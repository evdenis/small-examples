/*@ requires \valid(a);
    requires \valid(b);
    assigns *a, *b;
    ensures *a == \old(*b);
    ensures *b == \old(*a);
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
