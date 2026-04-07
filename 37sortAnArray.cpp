#include<iostream>

void sort(int array[], int size);

int main(){
    int array[] = {3,2,1,6,5,4};
    sort(array,sizeof(array)/sizeof(array[0]));
    for(auto x: array){
        std::cout<<x<<" ";
    }
}
void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0 ; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
