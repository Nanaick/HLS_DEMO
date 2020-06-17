#include<stdio.h>
#include"./../src/demo_test.h"


int main()
{
	uint32 data_ii[4];
	uint32 data_oi[4] = {1, 2, 3,4};
	float data_if[4];
	float data_of[4] = {1, 2, 3, 4};
	int i;
	for(i=0;i<4;i++)
	{
		data_ii[i] = i ;
		data_if[i] = i + 0.5;
	}
	demo_test(data_ii,data_if, data_oi, data_of);
	for(i=0;i<4;i++)
	{
		fprintf(stdout,"i = 0%d\n",i);
		fprintf(stdout,"data_ii = 0%d\n",data_ii[i]);
		fprintf(stdout,"data_if = 0%f\n",data_if[i]);
		fprintf(stdout,"data_outi = 0%d\n",data_oi[i]);
		fprintf(stdout,"data_outof = 0%f\n",data_of[i]);
	}





}

