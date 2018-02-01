//Authors: 
#include <iostream>
#include <string>

int main()
{
  std::string name;
  int number;
  char punctuation;
  std::string verb;
  
  std::cout<<"Name \n";
  std::cin>> name;
  
  std::cout<<"Pucnctuation \n";
  std::cin>> punctuation;
  
  std::cout<<"Enter a number \n";
  std::cin>> number;
  
  std::cout<<"Enter a intense destructive verb \n";
  std::cin>> verb;

std::cout<<"\n "<<name<< punctuation<< "\n Stop eating hotdogs! You've already had "<<number <<".\n Give me that hotdog. Otherwise you'll "<<verb <<".\n\n"; 


  return 0;
}
