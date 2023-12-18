#include<iostream>
using namespace std;
int main(){
    int arr[]={-4,-2,-1,0,1,3,4,6,7,8,10,12};
    int targetdif=2;
    int size=12;
    //code to find if there is pair with target absolute difference
    int i=0,j=1;
    bool found=false;
    while(i<size and j<size){
        if(abs(arr[i]-arr[j])==targetdif){
            //found a pair
            found=true;
            break;
        }
        else if(abs(arr[i]-arr[j])<targetdif){
            //dif less than taretdif increase it
            j++;
        }
        else{
            //dif greater than targetdif decrease it
            i++;
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