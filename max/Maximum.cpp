#include <iostream>
using namespace std;
/* we just want to maximum with return function which is
usable*/
int find_max(int array[],size_t len){
	//len is the size of the array
	int max = -100000; 	//minimum size of the integer
	for (size_t i = 0; i < len; i++){
		if (max < array[i])
			max = array[i];
	}
	return max;
}

int main(){
 	size_t SIZE = 10;
	int array1[SIZE] = {1,2,3,4,10,30,100,22,2,1};
	int f=find_max(array1,SIZE);
	printf("%d is maximum",f);
}
