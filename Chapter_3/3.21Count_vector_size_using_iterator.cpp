#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cout;
using std::endl;


void check_vector_size(vector<string> vec){
    int element_count = 0;
    vector<string>::iterator bi = vec.begin(), ei = vec.end();
    
    for(;bi != ei;++bi){
        element_count++;
        cout << *bi << " ";
    }
    cout << "Count: " << element_count << "\n" << endl;

}

void check_vector_size(vector<int> vec){
    int element_count = 0;
    vector<int>::iterator bi = vec.begin(), ei = vec.end();
    
    for(;bi != ei;++bi){
        element_count++;
        cout << *bi << " ";
    }
     cout << "Count: " << element_count << "\n" << endl;

}

int main(){
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};//10 default-initialized elements
    vector<string> v7{10, "hi"};

    check_vector_size(v1);
    check_vector_size(v2);
    check_vector_size(v3);
    check_vector_size(v4);
    check_vector_size(v5);
    check_vector_size(v6);
    check_vector_size(v7);

    return 0;
}