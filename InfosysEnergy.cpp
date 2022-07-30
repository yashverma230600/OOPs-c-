// Problem Statement :

// You are given an array of size N. You need to change this array into a mountain. By mountain we mean, the either ends of the array should have equal elements. Then as we move towards the middle from both ends, the next element is just one more than the previous one. So, it would have a peak in the middle and decrease if you go towards either end, just like a mountain.

// Examples of mountains are [1, 2, 3, 2, 1] or [6, 7, 8, 8, 7, 6]. But the array [1, 2, 4, 2, 1] is not a mountain because from 2 to 4 the difference is 2. The array [1, 2, 3, 1] is also not a mountain because the elements 2 and 3 are not equal from both ends.

// You need to find the minimum number of elements that should be changed to make the array a mountain. You can make the elements negative or zero as well.

// Input Format
// N :: INTEGER
// The first line contains an integer, N, denoting the number of elements in array. N :: 1 -> 10^5

// array :: INTEGER ARRAY
// Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing i-th element of array. array[i] :: 1 -> 10^6

// Sample Input 1:
// 5
// 1
// 2
// 3
// 4
// 5

// Sample Output 1 :
// 2

// Sample input 2:
// 9
// 1
// 1
// 1
// 2
// 3
// 2
// 1
// 1
// 1

// Sample Output 2:
// 4


#include <bits/stdc++.h>
using namespace std;

int exercise(int arr[],int test, int energy){

    for(int i=0;i<test;i++){
        if(arr[i]==energy){
            return 1;
        }
    }


    int sum=0;
    int ans=0;
    int ans1=0;

    for(int i=0;i<test;i++){
        sum=sum+arr[i];
        if(sum>=energy){
            ans=i+1;
            return ans;
        }
    }
    sum=0;
    for(int i=0;i<test;i++){
        sum=sum+arr[i];
        if(2*sum>=energy){
            ans1=2*(i+1);
            return ans1;
        }
    }
    return -1;

}


int main()
{
    int energy;
    cin>>energy;
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++){cin>>arr[i];}

    int ans=exercise(arr,test,energy);
    cout<<ans;

}