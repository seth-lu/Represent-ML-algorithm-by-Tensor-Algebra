#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <sstream>
#include<stdlib.h>
#include<vector>
#include <cstdlib>
#include <climits>
#include <numeric>
#include"checksum.cpp"
#include<itensor/all.h>
#include<itensor/itensor.h>
#define th 
using namespace itensor;

std::vector<ITensor> load_mul(std::string name,std::string name2,ITensor A,ITensor B)
{
	std::ifstream stream(name);
	string line;
	std::getline(stream,line);
	std::ifstream stream2(name2);
	string line2;
	std::getline(stream2,line2);

    
    std::stringstream lineStream(line);
    string head, type, formats, field, symmetry;
    lineStream >> head >> type >> formats >> field >> symmetry;
    bool symm = (symmetry=="symmetric");
//    
    std::stringstream lineStream2(line2);
    string head2, type2, formats2, field2, symmetry2;
    lineStream2 >> head2 >> type2 >> formats2 >> field2 >> symmetry2;
    bool symm2 = (symmetry2=="symmetric");

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
  
  
    string token2;
	do 
	{
     std::stringstream lineStream2(line2);
     lineStream2 >> token2;
     if (token2[0] != '%') 
	  {
      break;
      }
    } while (std::getline(stream2, line2));
  
  
  
   // The first non-comment line is the header with dimension sizes
     std::vector<int> dimensions;
     char* linePtr = (char*)line.data();
     while (int dimension = strtoul(linePtr, &linePtr, 10)) 
     {
    //taco_uassert(dimension <= INT_MAX) << "Dimension exceeds INT_MAX";
          dimensions.push_back(static_cast<int>(dimension));
     }
     
     std::vector<int> dimensions2;
     char* linePtr2 = (char*)line2.data();
     while (int dimension2 = strtoul(linePtr2, &linePtr2, 10)) 
     {
    //taco_uassert(dimension <= INT_MAX) << "Dimension exceeds INT_MAX";
          dimensions2.push_back(static_cast<int>(dimension2));
     } 
//     cout<<dimensions[0];
//     cout<<dimensions[1];
//     cout<<dimensions[2];
        
           auto a=Index(dimensions[0]);
           auto b=Index(dimensions[1]);
           auto c=Index(dimensions2[0]);
           auto d=Index(dimensions2[1]);
           A = ITensor(a,b);
           B = ITensor(c,d);
           double x,y,z,f=0,f2=0;
		  while(f!=dimensions[2])
		  {
		  	stream>>x>>y>>z;
		  	if(symm)
		  	{
		  	A.set(a=x,b=y,z);
		  	A.set(a=y,b=x,z);
		    }
		    else
		    A.set(a=x,b=y,z);

		  	f++;
			  }
			  
		  while(f2!=dimensions2[2])
		  {
		  	stream2>>x>>y>>z;
		  	if(symm2)
		  	{
		  	B.set(c=x,d=y,z);
		  	B.set(c=y,d=x,z);
		    }
		    else
		    B.set(c=x,d=y,z);

		  	f2++;
			  }
			#ifdef t
			A=checksum(A);  
			B=checksum(B);
			#endif  
			  std::vector<ITensor> m;
			  m.push_back(A);
			  m.push_back(B);
			  return m;

}
