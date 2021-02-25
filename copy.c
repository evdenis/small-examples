struct test {
	int a;
	long b;
	char c;
};

/*@ requires \valid(s1);
    requires \valid_read(s2);
    assigns *s1;
    ensures s1->a == s2->a;
    ensures s1->b == s2->b;
    ensures s1->c == s2->c;
    ensures *s1 == *s2;
 */
void copy(struct test *s1, struct test *s2)
{
	*s1 = *s2;
}
