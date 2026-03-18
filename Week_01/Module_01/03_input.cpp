//all time std use kore
#include <iostream>

int main() 
{
  int age;
  char initial;

  std::cout <<"Enter your age:";//printf
  std::cin >> age;//scanf//c++ variable aa format specifire & ("") use kora lagge nah

  std::cout << "Enter the first letter of your name: "; 
  std::cin >> initial;

  cout << age <<std:: endl;
  cout << initial <<std::endl;


  return 0;
}

//global akbar use korle ar kora lagbe nah

#include <iostream>
using namespace std;//global use 

int main() 
{
  int age;
  char initial;

  cout <<"Enter your age:";//printf
  cin >> age;//scanf

  cout << "Enter the first letter of your name: "; 
  cin >> initial;

  cout << age <<endl;
  cout << initial <<endl;

  return 0;
}