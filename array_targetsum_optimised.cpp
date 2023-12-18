#include<iostream>
using namespace std;
int main(){
    int arr[]={-4,-2,-1,0,1,3,4,6,7,8,10,12};
    int targetsum=10;
    int size=12;
    //code to find if there is pair with targetsum
    int i=0,j=size-1;
    bool found=false;
    while(i<j){
        if(arr[i]+arr[j]==targetsum){
            //found a pair
            found=true;
            break;
        }
        else if(arr[i]+arr[j]<targetsum){
            //sum less than taretsum increase it
            i++;
        }
        else{
            //sum greater than targetsum decrease it
            j--;
        }
    }
    if(found==true){
        cout<<"Pair Present";
    }
    else{
        cout<<"Not Present";
    }
    return 0;
}