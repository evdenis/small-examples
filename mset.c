/*@ requires size >= 0;
    requires \valid(arr + (0..size-1));
    assigns arr[0..size-1];
    ensures \forall integer i; 0 <= i < size ==> arr[i] == val;
 */
void mset(int size, int arr[size], int val)
{
	/*@ loop invariant 0 <= size <= \at(size, Pre);
	    loop invariant \forall integer i; i < size ==> arr[i] == \at(arr[i], Pre);
	    loop invariant \forall integer i; size <= i < \at(size, Pre) ==> arr[i] == val;
	    loop variant size;
	 */
	while (size) {
		arr[--size] = val;
	}
}
