#include<iostream>
#include<vector>
using namespace std;

//unique number in linear search
int uniqueNumber(vector<int> vec, int size){
    int unique = 0;
    for (int i: vec)
    {
        unique ^= i;
    }
    
    return unique;
}

int main(){
    vector<int> num = {4,4,6,3,6,8,3};
    int size = 7;
    cout<<uniqueNumber(num, size);
}