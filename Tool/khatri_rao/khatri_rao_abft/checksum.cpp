#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <sstream>
#include<stdlib.h>
#include<vector>
#include <cstdlib>
#include <climits>
#include <numeric>
#include<itensor/all.h>
#include<itensor/itensor.h>
#include<itensor/index.h>
#include<itensor/all_basic.h>
#include<itensor/global.h>
#include<itensor/types.h>
#include<itensor/util/print_macro.h>
using namespace itensor;
ITensor checksum(ITensor A)
{
	auto s=inds(A);

	auto a=s(1);
	auto b=s(2);
	auto c=Index(dim(a)+1);
	auto d=Index(dim(b)+1);
	A=A *delta(a,c);
	A=A *delta(b,d);
	s=inds(A);
    a=s(1);
	b=s(2);

	int i,j;
	double sum=0;
	for(i=1;i<dim(a);i++)
	{
		for(j=1;j<dim(b);j++)
		{
			sum+=elt(A,a=i,b=j);
		 }
		A.set(a=i,b=dim(b),sum);

		 sum=0; 
	}
	
		for(i=1;i<dim(b);i++)
	{
		for(j=1;j<dim(a);j++)
		{
			sum+=elt(A,b=i,a=j);	
		 }
		A.set(a=dim(a),b=i,sum);

		 sum=0; 
	}
	
	return A;
}
