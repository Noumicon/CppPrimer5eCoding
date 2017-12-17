#include "iostream"
#include "string"

int main(){
  std::string input, pause;
  std::getline(std::cin,input);
  for (auto &character:input){
      if(ispunct(character)){
        character = ' ';
      }
  }
  
  std::cout << input;
  std::cin >> pause;
  return 0;
}
