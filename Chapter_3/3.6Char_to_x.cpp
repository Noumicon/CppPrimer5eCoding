#include "iostream"
#include "string"

int main(){
  std::string str = "Hello World";

  for(auto &character:str){
    if(isalpha(character)){
      character = 'x';
    }
  }
  std::cout << str;

  int pause;
  std::cin >> pause;
  return 0;
}
