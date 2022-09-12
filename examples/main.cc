#include"../MyArray.hpp"
int main()
{
  vishal::MyArray<int>intArray{45,67,89,05,34,65,34};
  vishal::MyArray<std::string>stringArray{"hello","this","is","vishal","creator","of","MyArray",":)","!"};

  std::cout<<intArray.toString()<<"\n";
  std::cout<<stringArray.toString()<<"\n";
  return 0;
};
