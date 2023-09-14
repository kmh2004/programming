#include <stdio.h>

int main()
{
	char ch = 'A';
	char str[20] = "Hello World!";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;

	printf("%s %c\n", "Character is", ch);
	printf("%s %s\n", "String is", str);
	printf("%s %f\n", "Float value is", flt);
	printf("%s %d\n", "Integer value is", no);
	printf("%s %f\n", "Double value is", dbl);
	printf("%s %o\n", "Octal value is", no);
	printf("%s %x\n", "Hexadecimal value is", no);
}