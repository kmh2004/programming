﻿#include <stdio.h>

int main()
{
	printf("\"강병익\"의 출석점수 계산\n");
	printf("---------------------\n");
	printf("%10s %5d 시간\n", "수업시간", 60);
	printf("%10s %5d 시간\n", "결석시간", 2);
	printf("%10s %5.1f %%\n", "출석률", (((60 - 2) / 60.0) * 100.0));
	printf("%10s %5.1f 점\n", "출석점수", (60 - 2) / 60.0 * 15 );
}