/*@ requires n >= 0;
    requires \valid(a+(0..n-1));
    requires \forall integer i, j; 0 <= i < j < n ==> a[i] <= a[j];
    assigns \nothing;
    behavior NOT_EXISTS:
       assumes \forall integer i; 0 <= i < n ==> a[i] != key;
       ensures \result == \null;
    behavior EXISTS:
       assumes \exists integer i; 0 <= i < n && a[i] == key;
       ensures \exists integer i; 0 <= i < n && \result == (a + i);
       ensures (*\result) == key;
    complete behaviors;
    disjoint behaviors;
 */
int *spec_bsearch(int a[], int n, int key)
{
	int left = 0;
	int right = n - 1;

	/*@ loop invariant 0 <= left;
	    loop invariant right < n;
	    loop invariant \forall integer i; 0 <= i < n && a[i] == key ==> left <= i <= right;
	    loop invariant \forall integer i; 0 <= i < n && a[i] == key ==> a[left] <= key <= a[right];
	    loop variant right - left;
	 */
	while (left <= right) {
		int m = left + (right - left) / 2;

		if (a[m] < key) {
			left = m + 1;
		} else if (a[m] > key) {
			right = m - 1;
		} else {
			return &a[m];
		}
	}

	return NULL;
}
