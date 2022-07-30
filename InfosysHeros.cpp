// Question 12
// Problem Statement :

// Today you decided to go to the gym. You currently have energy equal to E units. There are N exercises in the gym. Each of these exercises drains Ai amount of energy from your body.

// You feel tired if your energy reaches 0 or below. Calculate the minimum number of exercises you have to perform such that you become tired. Every unique exercise can only be performed at most 2 times as others also have to use the machines.

// If performing all the exercises does not make you feel tired, return -1.

// Input Format
// E :: INTEGER
// The first line contains an integer, E, denoting the Energy.
// E :: 1 -> 10^5

// N :: INTEGER
// The next line contains an integer, N, denoting the number of exercises. N :: 1 -> 10^5

// A :: INTEGER ARRAY
// Each line i of the N subsequent lines (where 0 ≤ i < N) contains an integer describing the amount of energy drained by i-th exercise.
// A[i] :: 1 -> 10^5

// Sample Input 1:
// 6
// 2
// 1
// 2

// Sample Output 1 :
// 4

// Sample input 2:
// 10
// 2
// 1
// 2

// Sample Output 2:
// -1

// Sample input 3:
// 2
// 3
// 1
// 5
// 2

// Sample Output 3:
// 1


#include <bits/stdc++.h>
using namespace std;


int prog(int arr[], int n, int m, int h){

    int d=h;
    for(int i=n-1;i>=0;i--){
        
        if(d>=arr[i]){

            d=d-arr[i];
            if(d==0){
                n--;
                if(n==0){
                    
                    return i;
                }
                d=h;
            }
    }
    else if(d<arr[i]){
        n--;

        if(n==0){
            return i+1;
        }
        i++;
        d=h;
    }


    }
}

int main()
{
 int n,m,h;
 cin>>n,m,h;
 int arr[n];
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int ans=prog(arr,n,m,h);
 cout<<ans;

}