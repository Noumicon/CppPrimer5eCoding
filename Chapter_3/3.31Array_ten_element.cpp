#include <iostream>


unsigned scores[11];//default init to 0

int main(){
    
    constexpr int size = 10;
    int arr[size], arr1[size];

    for(auto &ele:arr){
        ele = 12;
    }

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        arr1[i] = arr[i];
    }

    for(auto ar:arr1){
        std::cout << ar << " " << std::endl;

    }
    for(auto ar:scores){
        std::cout << ar << " ";
    }
        std::cout << std::endl;
}