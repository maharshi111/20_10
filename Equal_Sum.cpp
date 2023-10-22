#include <bits/stdc++.h>
using namespace std;

string equilibrium(int *arr, int n){
    
        for(int i =0;i<n;i++){
            int sum1=0,sum2 =0;
            // int sum2=0;
            cout<<sum1<<endl;
            cout<<sum2<<endl;
            for(int j=0;j<i;j++){

                sum1=sum1+arr[j];
            }
            for(int k=i+1;k<n;k++){
                sum2=sum2+arr[k];
            }
             if(sum1==sum2){
            return "YES";
        }
        }
       
      return "FALSE";
}

int main(){
     int arr[] = {1,2,3,3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << equilibrium(arr, arr_size);
 
    return 0;
}
//https://practice.geeksforgeeks.org/problems/equal-sum0810/1