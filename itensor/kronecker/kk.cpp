# include "itensor/all.h"
# include "itensor/util/print_macro.h"
using std::vector;
using namespace itensor;

//KR product function
ITensor kk(ITensor A,ITensor B)
{
	auto s1=inds(A);
	auto s2=inds(B);
	auto a=s1(1);
	auto b=s1(2);
	auto c=s2(1);
	auto d=s2(2);
	auto e =Index (dim(a)*dim(c), " e " );
    auto f =Index (dim(b)*dim(d), " f " );
	auto C=ITensor(e,f);
	//auto C = randomITensor (j,k);
//    vector<double> v1;
//    vector<double> v2;
//    
    int i,j,k,w;
    double product;
    for(i=1;i<dim(b)+1;i++)
    {
    	for(j=1;j<dim(a)+1;j++)
    	{
    		for(k=1;k<dim(d)+1;k++)
    		{
    			for(w=1;w<dim(c)+1;w++)
    			{
    				product=elt(A,b=i,a=j)*elt(B,d=k,c=w);
    				C.set(e=j+dim(c)*(w-1),f=i+dim(d)*(k-1),product);
				}
			}
		}
	}
    return C;

}











