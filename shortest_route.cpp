#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char arr[100];
    cin.getline(arr,100);
    int x=0,y=0;
    for(int i=0;arr[i]!='\0';i++){
        switch(arr[i]){
            case 'N':y++;
                    break;

            case 'S':y--;
                    break;

            case 'E':x++;
                    break;

            case 'W':x--;
                    break;
        }
    }
    cout<<"Final Postion is "<<"x:"<<x<<" y:"<<y<<"\n";
    cout<<"Shortest Path:";
    if(x>=0 && y>=0){
        while(y--){
            cout<<'N';
        }
        while(x--){
            cout<<'E';
        }
    }
    //    if(x>=0 && y<=0){
    //     while(x--){
    //         cout<<'E';
    //     }
    //     while(y++){
    //         cout<<'S';
    //     }
    // }
    //    if(x<=0 && y>=0){
    //     while(x++){
    //         cout<<'W';
    //     }
    //     while(y--){
    //         cout<<'N';
    //     }
    // }
    //    if(x<=0 && y<=0){
    //     while(x++){
    //         cout<<'W';
    //     }
    //     while(y++){
    //         cout<<'S';
    //     }
    return 0;
}