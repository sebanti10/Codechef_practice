#Ciel and A-B Problem
#Problem Code: CIELAB

#include<stdio.h>
int main()
{
	int A,B,C;
	scanf("%d %d", &A, &B);
		C=(A-B);
		if(C%10==9)
			C--;
		else
			C++;
	printf("%d", C);
	return 0;
}
