#include<stdio.h>
#include<limits.h>
void main()
{
	printf(" SHORT INT:\n signed:(%hd to %hi)",SHRT_MIN , SHRT_MAX);
	printf("\n unsigned:(%hu to %hu)",0 , USHRT_MAX);
	printf("\n INT:\n signed:(%d to %i)",INT_MIN , INT_MAX);
	printf(" \n unsigned:(%u TO %u)",0 , UINT_MAX);
}
