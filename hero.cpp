// comparing size, length, capacity and max_size
#include <iostream>
#include <string>

int main ()
{
  std::string str ("Test string");
  std::cout << "size: " << str.size() << "\n";
  std::cout << "size: " << str.length() << "\n";
  std::cout << "size: " << str.capacity() << "\n";
  std::cout << "size: " << str.max_size() << "\n";
  return 0;
}