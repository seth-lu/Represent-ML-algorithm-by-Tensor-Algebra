#include <torch/torch.h>
#include <iostream>

int main() {
  torch::Tensor tensor1 = torch::randn({2,3});
  torch::Tensor tensor2 = torch::randn({2,3});
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
  auto tensor3=tensor1/tensor2;
  std::cout << tensor1 << std::endl;
  std::cout << tensor2 << std::endl;
  std::cout << tensor3 << std::endl;
}
