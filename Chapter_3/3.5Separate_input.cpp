#include "iostream"
#include <string>
using std::cin;using std::cout;using std::endl; using std::string;

int main(){
  string sen1, sen2;
  while(cin >> sen1){
    if(sen1 == "#")
      break;
    if(sen1.empty())a
      sen1 = "";
    else
    sen1 += sen1 + " ";
    sen2 += sen1;
  }
  cout << sen2;
  cin >> sen1;
}
