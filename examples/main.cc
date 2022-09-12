#include"../MyArray.hpp"
int main()
{
  vishal::MyArray<int>intArray{45,67,89,05,34,65,34};
  vishal::MyArray<int>intArray2(intArray);

  std::cout<<intArray.toString()<<"\n";
  return 0;
};
