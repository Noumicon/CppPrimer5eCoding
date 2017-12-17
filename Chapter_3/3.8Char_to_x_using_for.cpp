#include "iostream"
#include "string"

int main(){
  std::string str = "Hello World1!@#$%^&*()_";
  int pause;
  for(int i = 0; i < str.length();i++){
    if(isalpha(str[i])){
      str[i] = 'x';
    }
  }
  std::cout << str;
  std::cin >> pause;
  return 0;
}
