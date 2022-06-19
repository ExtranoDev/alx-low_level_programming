#include <stdio.h>
#include <stdbool.h>

int add_num1(int *a, int *b);

int add_numi(int *a, int *b)
{
	int c = *a + * b;
	return c;
}

void add_num(int *a, int *b)
{
	int c = *a + *b;
	printf("Addition of a = %d & b = %d  == %d\n", *a, *b, c);
}
void mul_num(int *a, int *b)
{
	int c = *a * *b;
	printf("Multiplication of a = %d & b = %d  == %d\n", *a, *b, c);
}
void div_num(int *a, int *b)
{
	float c = *a / *b;
	printf("Division of a = %d & b = %d  == %.2f\n", *a, *b, c);
}


int main(void)
{
	int a = 8, b = 9;
	int (*add)(int *, int *) = &add_numi;
	void (*grp_fun[])(int *, int *) = {&add_num, &mul_num, &div_num};
	printf("c == %d\n", (*add)(&a, &b));
	(*grp_fun[1])(&a, &b);
	(*grp_fun[0])(&a, &b);

	/*
	int arr[] = {1, 2, 3, 4, 5};
	int arr_d[2][10] = {{1, 2, 3, 4}, {5, 6, 7}};
	char str_d[4][12] = {"Weekend", "Ends", "Today", "Work Starts"};
	
	int i = 9;
	int *x = &i;

	printf("i == %d : x == %d\n", i, *x);
	printf("Address of i: %p\n",(void *)x);
	*x = 10;
	printf("i == %d : x == %d", i, *x);
	printf("Address of i: %p\n\n", (void *)x);
	
	printf("Value if arr_d[1][1]: %d\n", arr_d[0][1]);
	printf("Value if arr_d[0][2]: %d\n", arr_d[1][2]);
	printf("Value if str_d[1][1]: %c\n", str_d[1][1]);
	printf("Value if str_d[3]: %s\n\n", str_d[3]);
	printf("Address the First element in the array %p\n", (void *)(arr + 1));
	printf("Address the First element in the array %p\n", (void *)&arr[0]);
	printf("Adrress of the whole array %p\n", (void *)&arr);
	printf("%d\n", (int)'R');

	int *p;
	char *c;
	float *d;
	int count;
	unsigned int *i;
	int arr[] = {1, 2, 2, 4, 5, 6};
	
	----------------------------
	char s[] = "Weekend";
	char *str = "Weekend";

	int i = 0, x = 2;

	printf("%p -- %p\n", (void *)&i, (void *)&x);

	s[0] = 'h';
	str[0] = 'h';

	printf("%s\n", s);
	printf("%s\n", str);
	-------------------------

	for (count = 0; str[count]; count++)
		;
	printf("Total elements in the array %d\n", count);

	for (count = 0; str[count] != '\0'; count++)
		;
	printf("Total elements in the array %d\n\n", count);

	printf("c -- %d\n\n", 'c');
	
	printf("Size of Str Array %ld, Size of int pointer -- %ld\n", sizeof(str), sizeof(p));
	printf("Size of Int Array %ld, Size of char pointer -- %ld\n\n", sizeof(arr), sizeof(c));
	printf("Size of float %ld, Size of float pointer -- %ld\n", sizeof(float), sizeof(d));
	printf("Size of Unsigned int %ld, Size of Unsigned int pointer -- %ld\n", sizeof(unsigned int), sizeof(i));
	printf("Size of boolean %ld\n", sizeof(bool));
	printf("Size of size_t %ld\n", sizeof(size_t));
	printf("Size of ssize_t %ld\n", sizeof(ssize_t)); */
	return (0);
}
