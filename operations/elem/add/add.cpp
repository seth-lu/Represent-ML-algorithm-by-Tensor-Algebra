#include<torch/torch.h>
#include<iostream>
#include"read.cpp"
using namespace at;
using namespace std;
int main(int argc,char *argv[]) 
{
//  torch::Tensor build_checksum(torch::Tensor t1);
//  void verify(torch::Tensor tensor3);
    auto t1=read(argv[1]); 
    auto t2=read(argv[2]);
//  Tensor t1 = zeros({2,3,2});
//  Tensor t2 = rand({130,130});
//  Tensor t4 = rand({130,130});
 // torch::Tensor tensor2 = torch::zeros({2,3});
//  auto t3=tensor1+tensor2;
//  auto t3=subtract(tensor1,tensor2);
//auto t3=addition(tensor1,tensor2);
//auto a=tensor1.numel();
//    int a=tensor1.dim();
//auto t3=at::add(tensor1,tensor2);
//  n=tensor1[0][0].item().toDouble();
//  std::cout<<n;
//  Tensor t3=t1.reshape({1,1});
//    auto t3=cat({t1,t2},2);
 //        t3=cat({t3,t4},0);
//     auto t3=add(t1,t2);
//       auto v0=t2.prod({0},true);
//       auto v1=t2.prod({1},true);
//       auto f=t2.flatten(0,2);
      // t2=cat({t2,v0},0);
      // auto v1=t2.sum({1},true);
      // auto t3=cat({t2,v1},1);
//     Tensor v1;
//     v1=t1.sum({0},true);
//  tensor2=build_checksum(tensor2);
//  auto tensor3=tensor1+tensor2;
//  verify(tensor3);
//  std::cout << tensor1 << std::endl;
//  std::cout << tensor2 << std::endl;
//  t3.print();
//  auto t3=add(t4,t1);
//   auto order=t2.dim();
//   auto f1=t2.flatten(0,1);
 //  auto f2=f1.unflatten(0);

/*   Tensor verify(Tensor t)
  {      
	  auto f1=t2.flatten(0);

	  auto f2=f1.unflatten(0,{3});

	  cout<<"no errors"<<endl;
  }*/
  clock_t start = clock();
  auto t3=add(t1,t2);
  clock_t end = clock();
       //cout<<t2<<endl<<t4<<endl;
       cout << t3<< endl;
  cout << "consume is:  " << (double)(end - start) / CLOCKS_PER_SEC << "s" << endl;

       //verify(t3);
//  std::cout << f2<< std::endl;
//  std::cout << v1<< std::endl;
 // std::cout<<a<<std::endl;
//  verify(t1);
//  std::cout << tensor3[1][1] << std::endl;
//  tensor3[1][1]=100;
//  std::cout << tensor3[1][1] << std::endl;

}




