#include<iostream>
bool eligible(int age,int limit){
    if(age>=limit){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int vote_limit=18;
    int eligible_to_vote=eligible(22,vote_limit);
    if(eligible_to_vote){
        std::cout<<"eligible to vote";
    }
    else{
        std::cout<<"Not eligible";
    }
    return 0;
}