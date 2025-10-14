#include <iostream>
#include <climits>
using namespace std;

// linear search 
// find the target and print index
int SearchArray(int arr[], int size, int target){
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

// swaping Largest and smallest numbers of an array
void swapMaxMin(int arr[], int size){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int indSmall, indLarg;
    
    // finding smallest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            indSmall = i;
        }
    }

    // findinglargest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            indLarg = i;
        }
    }
    swap(arr[indLarg], arr[indSmall]);
}

//print unique value
void uniqueValue(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        int unique = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                unique ++;
            }
            
        }
        if (unique < 2)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
}
//interection of two array

int main(){
    int num[] = {2,2,3,4,5,4};
    uniqueValue(num, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<num[i]<<" ";
    // }
    
    return 0;

}
