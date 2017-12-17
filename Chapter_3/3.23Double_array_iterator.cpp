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
    vector<int> num_arr;
    
    for(int i = 1; i <= 10; i++)
        num_arr.push_back(i);
    
    vector<int>::iterator bi = num_arr.begin(), ei = num_arr.end();
    for(;bi != ei; ++bi)
        *bi = *bi * 2;

    for(auto ele:num_arr)
        cout << ele << " " << endl;
}