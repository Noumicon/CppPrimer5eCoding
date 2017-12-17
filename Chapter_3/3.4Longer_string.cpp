#include "iostream"
#include <string>
using std::cin;using std::cout;using std::endl; using std::string;

int main(){
  string sen1, sen2;
  getline(cin, sen1);
  getline(cin, sen2);
  if(sen1.size() == sen2.size()){
    cout << "Equal length";
  }else if(sen1.size() < sen2.size()){
    cout << "1 is longer";
  }else if(sen1.size() > sen2.size()){
    cout << "2 is longer";
  }
  cin >> sen1;
}
