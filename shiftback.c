/*@ assigns \nothing;
    ensures \result == a;
 */
unsigned shiftback(unsigned a)
{
	return ((a >> 1U) << 1U) + (a & 1U);
}

