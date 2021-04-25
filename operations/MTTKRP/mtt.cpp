# include "itensor/all.h"
# include "itensor/util/print_macro.h"
using std::vector;
using namespace itensor;

//Matriced function
ITensor mtt(ITensor A)
{
	auto s=inds(A);
	auto a=s(1);
	auto b=s(2);
	auto d =Index (dim(a), " d " );
    auto e =Index (dim(b), " e " );
	auto C=ITensor(d,e);
	int i,j,k,w;

//mode-a
    vector<double> v;
    for(i=1;i<dim(b)+1;i++)
    {
    		for(k=1;k<dim(a)+1;k++)
    		{
    			v.push_back(elt(A,a=k,b=i));
			}
	}
	
	k=0;
    for(i=1;i<dim(e)+1;i++)
    {
    	for(j=1;j<dim(d)+1;j++)
    	{
    		C.set(d=j,e=i,v[k]);
    		k++;
		}
	}

   
    return C;

}












