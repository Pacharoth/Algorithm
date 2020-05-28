#include <iostream>

/*we are using big O(logn) which can identify as Linear time*/
int bSearch(int arr[], int size, int item){
    int low = 0;            //declare the low and high
    int high = size - 1;    //high is full size of array so minus one cus of array
                            //count from 0 to size-1
    while (low<=high) {
        int mid = low + (high-low)/2;   //mid equal 0+ 4-1/2
        if (arr[mid] == item)           //arr[1]
            return mid;                 //return mid
        else if (arr[mid] < item)       //arr[mid] smaller item
            low = mid + 1;              //give low = mid plus one
        else high = mid - 1;            //otherwise high = 3/2 -1
    }
    return -1; //unsuccessfull result;
}

int main(int argc, char const *argv[]) {
    int arr[] = {2,4,6,10};
    int size = sizeof(arr)/sizeof(arr[0]);        //size array[]
    int item = 10;
    int result = bSearch(arr,size,item);
    if (result == -1)
        std::cout<<"Element not exist in index"<<std::endl;
    else
        std::cout<<"Element exist in index"<<std::endl;                                   //sizeof(arr) = ^2

    return 0;
}
