#include <stdio.h>

int main()
{
	double weight, height;

	printf("키를 입력하시오(cm) : ");
	scanf_s("%lf", &height);

	printf("몸무게를 입력하시오(kg) : ");
	scanf_s("%lf", &weight);

	printf("%6s : %6.1f\n", "몸무게", weight);
	printf("%6s : %6.1f\n", "키", height);

	height /= 100;
	double bmi = weight / (height * height);
	printf("%6s : %6.1f\n", "bmi", bmi);
}