#include <torch/torch.h>
#include <iostream>

void verify(torch::Tensor t3)
{
	int i,j,failure=0;
    torch::Tensor tensor3 = torch::zeros({3,4});
	tensor3=t3;
	double sum;
	for(i=0;i<2;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
		    sum+=tensor3[i][j].item().toDouble();
		}
//            std::cout<<sum<<std::endl;
//            std::cout<<tensor3[i][3]<<std::endl;
		    if(sum!=tensor3[i][3].item().toDouble())
		       failure=1;

	}
	
		for(j=0;j<3;j++)
	{
		sum=0;
		for(i=0;i<2;i++)
		{
			sum+=tensor3[i][j].item().toDouble();

		}
           			
			if(sum!=tensor3[2][j].item().toDouble())
		       failure=1;
	}
	
	std::cout<<tensor3<<std::endl;
	
	if(failure==1)
	    std::cout<<"error happened!"<<std::endl;
	else
		std::cout<<"all is correct!"<<std::endl;

	
}
