#include <iostream>
#include <climits>
using namespace std;

//find smallest 
int smallestArray(int arr[], int size){
        int smallest = INT_MAX;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
            
        }
    return smallest;
}

// find largest
int largestArray(int arr[], int size){
        int largest = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
            
        }
    return largest;
}

// linear search 
// find the target and print index
int targetArray(int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }        
    }
    return -1;
}

// reversing the original array using two pointers
void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    int num[] = {2,4,5,3,-3};
    reverseArray(num, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<num[i]<<" ";
    }
    
    return 0;
}