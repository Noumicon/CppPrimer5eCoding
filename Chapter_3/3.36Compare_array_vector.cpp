#include <vector>
#include <iterator>
#include <iostream>

using std::cout; using std::endl; using std::begin; using std::end; using std::vector; 

bool compare_arr(const int *pt1,int const *pte1, const int *pt2, int const *pte2){
    
    if((pte1 - pt1) != (pte2 - pt2)){
        cout << "different size";
        return false;
    }

    for(;(pt1 != pte1) && (pt2 != pte2);++pt1, ++pt2){
        if(*pt1 != *pt2){
            return false;
        }
    }
    return true;

}
bool compare_arr(char *pt1,char *pte1, char *pt2, char *pte2){
    
    if((pte1 - pt1) != (pte2 - pt2)){
        cout << "different size";
        return false;
    }

    for(;(pt1 != pte1) && (pt2 != pte2);++pt1, ++pt2){
        if(*pt1 != *pt2){
            return false;
        }
    }
    return true;

}

bool compare_vector(vector<int> v1, vector<int> v2){
    return v1 == v2;
}
bool compare_vector(vector<char> v1, vector<char> v2){
    return v1 == v2;
}



int main(){
    int a1[3] = {0, 1, 2};
    int a2[3] = {3, 2, 1};
    char b1[3] = {'4', '5', '6'};
    char b2[3] = {'4', '5', '6'};
    
    vector<int> vi1 = {1, 2, 3};
    vector<int> vi2 = {1, 2, 3};
    vector<char> vc1 = {'a', 'b', 'c'};
    vector<char> vc2 = {'a', 'a', 'a'};

    cout << compare_vector(vi1, vi2) << endl;
    cout << compare_vector(vc1, vc2) << endl;
    cout << compare_arr(begin(a1), end(a1), begin(a2), end(a2)) << endl;
    cout << compare_arr(begin(b1), end(b1), begin(b2), end(b2));



    return 0;
}