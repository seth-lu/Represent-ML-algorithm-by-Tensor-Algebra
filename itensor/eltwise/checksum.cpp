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
std::vector<ITensor> checksum(ITensor A,ITensor B)
{
	auto s1=inds(A);
	auto s2=inds(B);

	auto a=s1(1);
	auto b=s1(2);
	
	auto a1=Index(dim(a)+1);
	auto b1=Index(dim(b)+1);

	
	A=A *delta(a,a1);
	A=A *delta(b,b1);
	B=B *delta(a,a1);
	B=B *delta(b,b1);
//	s1=inds(A);
//	s2=inds(B);
//    a=s1(1);
//	b=s1(2);
//	c=s2(1);
//	d=s2(2);

	int i,j;
	double sum=0;
	for(i=1;i<dim(a1);i++)
	{
		for(j=1;j<dim(b1);j++)
		{
			sum+=elt(A,a1=i,b1=j);
		 }
		A.set(a1=i,b1=dim(b1),sum);

		 sum=0; 
	}
	
		for(i=1;i<dim(b1);i++)
	{
		for(j=1;j<dim(a1);j++)
		{
			sum+=elt(A,b1=i,a1=j);	
		 }
		A.set(a1=dim(a1),b1=i,sum);

		 sum=0; 
	}
	
	for(i=1;i<dim(a1);i++)
	{
		for(j=1;j<dim(b1);j++)
		{
			sum+=elt(B,a1=i,b1=j);
		 }
		B.set(a1=i,b1=dim(b1),sum);

		 sum=0; 
	}
	
		for(i=1;i<dim(b1);i++)
	{
		for(j=1;j<dim(a1);j++)
		{
			sum+=elt(B,b1=i,a1=j);	
		 }
		B.set(a1=dim(a1),b1=i,sum);

		 sum=0; 
	}

	
	std::vector<ITensor> v;
	v.push_back(A); 
	v.push_back(B); 
	
	return v;
}
