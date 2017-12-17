#include "iostream"
#include <string>
using std::cin;using std::cout;
int main(){
  std::string input;
  /*while (getline(cin, input)){  //read a line a time
    cout << input << std::endl;
  }
  */
  for (std::string forinput; cin >> forinput ; cout << forinput << std::endl);



}
