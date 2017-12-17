#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(){
    
    string input;
    vector<string> text;

    for(;getline(cin,input) && input != ".";){
        text.push_back(input + "\n");
    }

    for(auto &word:text){
        for(auto &ch:word){
            ch = toupper(ch);
        }
    }

    for(auto word:text){
        cout << word << " ";
    }
}