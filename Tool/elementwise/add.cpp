#include<itensor/all.h>
#include<itensor/itensor.h>
#include"load_add.cpp"
#include<vector>
#include <ctime>

#define t
using namespace itensor;

   int main(int argc,char *argv[])
{
std::vector<ITensor> load_add(std::string,std::string,ITensor A,ITensor B);
auto A = ITensor();
auto B = ITensor();
std::vector<ITensor> m; 
clock_t start = clock();
m=load_add(argv[1],argv[2],A,B);
A=m[0];
B=m[1];
auto C = A+B;
clock_t end = clock();
//PrintData(C);

std::cout << "consume is:  " << (double)(end - start) / CLOCKS_PER_SEC << "s" << std::endl;
return 0;




}
