#include<iostream>
int main(){
  int a=1;
  int &b=a;
  int *c=&a;
  std::cout << "c"<<c << '\n';
  std::cout << "*C"<<*c << '\n';
  return 0;
}
