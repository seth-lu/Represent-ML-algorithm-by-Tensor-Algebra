#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <sstream>
#include<stdlib.h>
#include<vector>
#include <cstdlib>
#include <climits>
#include <numeric>
using namespace std;
using namespace at;

Tensor read(string name)
{
	std::ifstream stream(name);
	string line;
	std::getline(stream,line);
    std::stringstream lineStream(line);
    string head, type, formats, field, symmetry;
    lineStream >> head >> type >> formats >> field >> symmetry;
    bool symm = (symmetry=="symmetric");
    bool pattern = (field=="pattern");
//    

	// Skip comments at the top of the file
	string token;
	do 
	{
     std::stringstream lineStream(line);
     lineStream >> token;
     if (token[0] != '%') 
	  {
      break;
      }
    } while (std::getline(stream, line));
  
  
  
  
   // The first non-comment line is the header with dimension sizes
     std::vector<int64_t> dimensions;
     char* linePtr = (char*)line.data();
     while (int dimension = strtoul(linePtr, &linePtr, 10)) 
     {
    //taco_uassert(dimension <= INT_MAX) << "Dimension exceeds INT_MAX";
          dimensions.push_back(static_cast<int>(dimension));
     }
     
     vector<int64_t> dim;
     
     int i;
     for(i=0;i<3;i++)
     {
     	dim.push_back(dimensions[i]);
	 }

     Tensor t=zeros(dim);
     Tensor t=randn(dim);
     Tensor t=zeros({130,130,1282});
     double x,y,z,w;
     //cout<<dim[0]<<endl;
     for(i=0;i<dimensions[3];i++)
     {
     	stream>>x>>y>>z>>w;
     	t[x-1][y-1][z-1]=w;
	 }
     //cout<<t[0][0]<<endl;
     //cout<<dimensions[0];
//     cout<<dimensions[1];
//     cout<<dimensions[2];
      //return dimensions;
      return t;


}
