#include <torch/torch.h>
#include <iostream>
#include "build.cpp" 
#include "verify.cpp"

int main() {
  torch::Tensor tensor1 = torch::zeros({2,3});
  torch::Tensor tensor2 = torch::zeros({2,3});
  int i,j;
  double n;
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
      {
      	tensor1[i][j]=n;
      	n++;
	  }
  }
    for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
      {
      	tensor2[i][j]=n;
      	n++;
	  }
  }
  
  auto t1=build_checksum(tensor1);
  auto t2=build_checksum(tensor2);
  auto tensor3=t1*t2;
  std::cout<<t1<<std::endl;
  std::cout<<t2<<std::endl;
  verify(tensor3);
  
}










