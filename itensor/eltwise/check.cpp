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
#include"checksum.cpp"
using namespace itensor;
int main()
{

	auto a=Index(4);
	auto b=Index(5);
	auto A =ITensor(a,b);
	A.set(a=1,b=1,10);
	A = checksum(A);
	PrintData(A);
//	Print(b);
//	auto s=inds(A);
//	auto c = s(2);
//	Print(c);
//	println(dim(c));
//    PrintData(A);
//    checksum(A,a,b);
//	 a=Index(dim(a)+1);
//	 b=Index(dim(b)+1);
//	auto B = permute(A,a,b);
//    auto c =Index(dim(a)+1);
//    auto d =Index(dim(b)+1);
//	A=A *delta(a,c);
//	A=A *delta(b,d);
//
//	int i,j;
//	double sum=0;
//	for(i=1;i<dim(a);i++)
//	{
//		for(j=1;j<dim(b);j++)
//		{
//			sum+=elt(A,a=i,b=j);
//		 }
//		A.set(a=i,b=dim(b),sum);
//
//		 sum=0; 
//	}
	
//		for(i=1;i<dim(b);i++)
//	{
//		for(j=1;j<dim(a);j++)
//		{
//			sum+=elt(A,b=i,a=j);	
//		 }
//		A.set(a=dim(a),b=i,sum);
//
//		 sum=0; 
//	}
	
	
//	PrintData(A);
	
	return 0;
}
