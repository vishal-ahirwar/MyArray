#include"../MyArray.hpp"
#include<iostream>
void printMyArray(vishal::MyArray<int>&arr)
{
  std::cout<<arr<<"\n";
};

int main()
{
  // vishal::MyArray<int>intArray{45,67,89,05,34,65,34};
  // vishal::MyArray<std::string>stringArray{"hello","this","is","vishal","creator","of","MyArray",":)","!"};
  // vishal::MyArray<double>doubleArray{5.4,6.4,3.4,23.45,65.67,67.5,99.99};
  //
  // if(static_cast<bool>(intArray)==true)std::cout<<"intArray is not empty!\n";
  // else std::cout<<"intArray is empty!\n";
  //
  // vishal::MyArray<std::string>dummyArray{};
  // if(static_cast<bool>(dummyArray)==true)std::cout<<"dummyArray is not empty!\n";
  // else std::cout<<"dummyArray is empty!\n";
  //
  // if(static_cast<int>(stringArray)==false)std::cout<<"MyArray<Type> to int conversion failed!\n";
  // if(static_cast<double>(stringArray)==false)std::cout<<"MyArray<Type> to double conversion failed!\n";
  //
  // std::cout<<intArray.toString()<<"\n";
  // std::cout<<stringArray.toString()<<"\n";
  // std::cout<<doubleArray.toString()<<"\n";
  // std::cout<<stringArray[3]<<"\n";
  // stringArray[3]="vishal ahirwar";
  // std::cout<<stringArray[3]<<"\n";
  // vishal::MyArray<double>values{34.5,45.6,45.3,67.77,8.77,67.565,4.33,34.34};
  // vishal::MyArray<std::string>Names{"vishal","rohan","rishi","inlilove","osuf"};
  //
  // if(static_cast<bool>(Names))std::cout<<Names.toString()<<"\n";
  // try{
  //     Names+="- from Earth planet\n";
  //     if(static_cast<bool>(Names))std::cout<<Names.toString()<<"\n";
  // }
  // catch(std::exception&e)
  // {
  //   std::cout<<"[error]"<<e.what()<<"\n";
  // };
  // vishal::MyArray<size_t>myAge(2);
  // vishal::MyArray<size_t>yourAge(2);
  // std::cout<<"my age:";
  // std::cin>>myAge;
  // std::cout<<"your age: ";
  // std::cin >>yourAge;
  // std::cout<<"myAge"<<myAge<<"\n"<<"your age : "<<yourAge<<"\nAfter swap :\n";
  // myAge.swap(yourAge);
  // std::cout<<"myage"<<myAge<<"\nyour age : "<<yourAge<<"\n";
  vishal::MyArray<int>arr{4,5,6,7};
  printMyArray(arr);
  // printMyArray(4);
  return 0;
};
