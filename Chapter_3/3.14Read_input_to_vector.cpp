#include "iostream"
#include "vector"
using std::cin; using std::vector;

int main(){
    vector<int> num_list;
    int temp = 0;
    //while input = int
    while(cin >> temp){
        num_list.push_back(temp);
    }
    //print the vector
    for(auto i:num_list){
        std::cout << i << ' ';
    }
}