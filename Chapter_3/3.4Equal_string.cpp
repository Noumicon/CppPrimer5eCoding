#include "iostream"
#include <string>
using std::cin;using std::cout;using std::endl; using std::string;

int main(){
  string sen1, sen2;
  getline(cin, sen1);
  getline(cin, sen2);
  if(sen1 == sen2){
    cout << "Equal";
  }
  if(sen1 > sen2){
    cout << "Sen 1 is larger";
  }else if (sen1 < sen2){
    cout << "Sen 2 is larger";
  }
  cin >> sen1;
}
