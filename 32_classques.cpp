/*
1. Move the Zero's To the right
sample Input : 12, 0, 13, 15,0
sample Output: 12 , 13, 15, 0 , 0

2. Wave_Array
sample Input: 2,4,7,8,9,10
sample output: 4 ,  2, 8, 7, 10, 9

3.Find the missing Elements

sample Input : 1,4,5,3
sample output : 2
*/

#include<iostream>
using namespace std;
void waveArr(int arr[],int n){
    for(int i = 0 ; i < n ; i = i+2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int n = 6;
    int arr[6] = {2,4,7,8,9,10};
    waveArr(arr,n);

    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}