#include <string>
#include <iostream>
#include <iterator>
#include <vector>

using std::vector;

int main(){
    int input, suma = 0, sume = 0;
    vector<int> num_arr;
    while(std::cin >> input){
        num_arr.push_back(input);
    }

    vector<int>::iterator bi = num_arr.begin(), ei = num_arr.end();
    for(;bi != ei -1 ;++bi){
        suma = *bi + *(bi + 1);
        std::cout << suma << " ";
    }
    std::cout << "\n";

    bi = num_arr.begin(), ei = num_arr.end();
    for(;(bi != ei) && (bi+1 != ei);){
        sume = *bi + *(ei - 1);
        std::cout << sume << " ";
        --ei;
        ++bi;
    }

    return 1;
}