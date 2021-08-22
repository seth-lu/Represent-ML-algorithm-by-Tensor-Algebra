#include <torch/torch.h>
#include <iostream>
torch::Tensor build_checksum(torch::Tensor t1)
{
	int i,j,k;
	double n;
    torch::Tensor t3 = torch::zeros({3,4});

  for(i=0;i<2;i++)
  {
  	for(j=0;j<3;j++)
  	{
  		 t3[i][j]=t1[i][j];
	}
  }
	
	for(j=0;j<3;j++)
  {
  	    for(i=0;i<2;i++)
          t3[2][j]+=t3[i][j];
  }
  
  	for(i=0;i<2;i++)
  {
  	    for(j=0;j<3;j++)
          t3[i][3]+=t3[i][j];
  }
  for(i=0;i<2;i++)
  {
  	  t3[2][3]+=t3[i][3];
  }
//	for(i=0;i<3;i++)
//  {
//  	for(j=0;j<4;j++)
//  	{
//  		 t3[i][4]+=t1[i][j];
//	}
//  }
	return t3;
}


