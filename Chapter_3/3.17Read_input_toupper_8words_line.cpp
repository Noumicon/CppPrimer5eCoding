#include "iostream"
#include "vector"
#include <string>
using std::cin; using std::vector;using std::string;

int main(){
    vector<string> word_list;
    string temp = "";
    //while input = int
    while(cin >> temp){
        if(temp == "break!")
            break;
        word_list.push_back(temp);
    }

    int counter = 0;
    
    for(string &words:word_list){
        for(char &characters:words){
            //if characters are lower case
            if(characters <= 122 && characters >= 97)
                //ascii -32 will output upper case
                characters = characters - 32;
        }
        

        std::cout << words << ' ';
        counter++;
        //if number of words are multipule of 8, print new line
        if(counter % 8 == 0)
            std::cout << "\n";
        
    }
}