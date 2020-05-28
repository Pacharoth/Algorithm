#include <iostream>
using namespace std;


bool contain_duplicate(const int* array, size_t len){
    /*we try to compare two value in the an array
    so to do that we use two loops*/
    for (size_t i = 0; i < len; i++) {
        for (size_t j = i; j < len; j++) {
            if (i!=j && array[i] == array[j])
                return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[]) {
    size_t SIZE =20;
    int array[SIZE] ={1,2,2,3,2,1,5,6};
    if (contain_duplicate(array,SIZE)){
        printf("It contains duplicate");
    }
    return 0;
}
