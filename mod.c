/*@ requires b != 0;
    assigns \nothing;
    ensures \result == (a % b);
 */
int mod(int a, int b)
{
	return a % b;
}
