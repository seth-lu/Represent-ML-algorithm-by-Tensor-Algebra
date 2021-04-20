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
using namespace itensor;

int main()
{
	auto a =Index(2);    
    auto b =Index(2);
	auto A = randomITensor(a,b); 
	auto B = randomITensor(a,b);
	auto C = A+B;
	const std::vector<string> inS{
        "ROMEO",
        "JUL",
        "The K",
        "That tho",
        "KING",
        "beauty of",
        "birth of K",
        "Hi",
        "JACK",
        "interestingly, it was J",
    };
    const std::vector<string> outS{
        ":\nThe sense to",
        "IET:\nWhat shall I shall be",
        "ing Richard shall be the strange",
        "u shalt be the",
        " HENRY VI:\nWhat",
        " the son,",
        "ing Richard's son",
        "ng of York,\nThat thou hast so the",
        "INGHAM:\nWhat shall I",
        "uliet",
    };
	bool pass = 1;
    std::cout << "\n---------------------------" << std::endl;
    std::cout << "RNN Warmup: " << inS[2] << std::endl;
    std::cout << "Expect: " << outS[3] << std::endl;
    if (pass)
        std::cout << "&&&& PASSED" << std::endl;
    else
        std::cout << "&&&& FAILED" << std::endl;
    std::cout << "---------------------------" << std::endl;
	PrintData(C);
}









    auto a =Index(2);    
    auto b =Index(2);
	auto A = randomITensor(a,b); 
	auto B = randomITensor(a,b);
