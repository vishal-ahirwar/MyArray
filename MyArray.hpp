#ifndef __MY_ARRAY__
#define __MY_ARRAY__
#include<memory>
#include<iostream>
#include<initializer_list>
#include<span>
#include<string>
#include<sstream>

namespace vishal
{
  template<typename Type>
  class MyArray
  {
  private:
    size_t size{};
    std::unique_ptr<Type[]>Array{};
  public:
    explicit MyArray(const size_t&size);
    explicit MyArray(std::initializer_list<Type>list);
    explicit MyArray(const MyArray<Type>&);
    explicit MyArray(MyArray<Type>&&other)noexcept;
    ~MyArray()=default;
    void operator=(const MyArray<Type>&)noexcept;
    void operator=(MyArray<Type>&&)noexcept;
    bool operator==(const MyArray<Type>&)const noexcept;

  public:
    size_t getSize()const noexcept{return this->size;};
    std::string toString()const;
  };
  template<typename Type>
  bool MyArray<Type>::operator==(const MyArray<Type>&right)const noexcept
  {
    const std::span<const int>lt{this->Array.get(),this->size};
    const std::span<const int>rt{right.Array.get(),right.size};
    return std::equal(std::begin(lt),std::end(lt),std::begin(rt),std::end(rt));
  };

  template<typename Type>
  std::string MyArray<Type>::toString()const
  {
    std::ostringstream str{};
    const std::span<const int>data{this->Array.get(),this->size};
    str<<"{";
    for(size_t i{0};auto&item:data)
    {
      ++i;
      str<<item;
      str<<(i<this->size?",":"");
    };
    str<<"}";
    return str.str();
  };

  template<typename Type>
  void MyArray<Type>::operator=(MyArray<Type>&&other)noexcept
  {
    if(this!=&other)
    {
      this->size=other.size;
      this->Array=std::move(other);
    };

  };

  template<typename Type>
  MyArray<Type>::MyArray(MyArray&&other)noexcept
  :size{other.size},Array{std::move(other)}{

  };


  template<typename Type>
  void MyArray<Type>::operator=(const MyArray<Type>&other)noexcept
  {
    this->size=other.size;
    this->Array=std::make_unique<Type[]>(this->size);
    std::span<const int>source{other.Array.get(),other.size};
    std::copy(std::begin(source),std::end(source),Array.get());
  };

  template<typename Type>
  MyArray<Type>::MyArray(const MyArray<Type>&other):size{other.size},Array{std::make_unique<Type[]>(size)}
  {
    const std::span<const int>source{other.Array.get(),other.size};
    std::copy(std::begin(source),std::end(source),Array.get());
  };

  template<typename Type>
  MyArray<Type>::MyArray(const size_t&size):size{size},Array{std::make_unique<Type[]>(size)}{

  };

  template<typename Type>
  MyArray<Type>::MyArray(std::initializer_list<Type>list):size{list.size()},Array{std::make_unique<Type[]>(size)}
  {
    std::copy(std::begin(list),std::end(list),Array.get());
  };


}

#endif//MyArray.hpp
