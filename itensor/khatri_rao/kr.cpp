# include "itensor/all.h"
# include "itensor/util/print_macro.h"
using std::vector;
using namespace itensor;

//KR product function
ITensor kr(ITensor A,ITensor B)
{
	auto s1=inds(A);
	auto s2=inds(B);
	auto a=s1(1);
	auto b=s1(2);
	auto c=s2(1);
	auto d=s2(2);
	auto e =Index (dim(a), " e " );
    auto f =Index (dim(b)*dim(d), " f " );
	auto C=ITensor(e,f);
  
    int i,j,k;
    double product;
    for(i=1;i<dim(a)+1;i++)
    {
    	for(j=1;j<dim(b)+1;j++)
    	{
    		for(k=1;k<dim(d)+1;k++)
    		{
    			product=elt(A,a=i,b=j)*elt(B,c=i,d=k);
    			C.set(e=i,f=j+dim(d)*(k-1),product);
			}
		}
	}
    
    return C;

}











