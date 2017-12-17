#include <iterator>
#include <iostream>

using std::cout; using std::endl; using std::begin; using std::end; 

int main(){

    int arr[10];
    int *pt = begin(arr), *pte = end(arr);
    for(;pt != pte;++pt){
        *pt = 0;
    }
    for(auto i:arr){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}