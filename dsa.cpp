#include <iostream>
#include <vector>


int binary(std::vector<int> array, int num){
    // int mid = ((array[0]/2)+(array[(sizeof(array)/sizeof(array[0])-1)]/2));
    int low = 0;
    int high = array.size() -1;
    while(low <= high){
            int mid = low + (high - low) / 2;
            int guess = array[mid];

            if(guess == num){
                return mid+1;
            }
            else if(num > guess){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return -1; // not found
}

int main() {
    std::vector<int> array  = {1,2,3,6,9,100};
    std::cout<<binary(array, 100);
}
