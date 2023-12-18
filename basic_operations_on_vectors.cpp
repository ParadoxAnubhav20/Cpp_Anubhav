#include<iostream>
#include<vector>
int main(){
    std::vector<int> v={34,56,78};
    std::cout<<"Size:"<<v.size()<<"\n";
    std::cout<<"Capacity:"<<v.capacity()<<"\n";
    v.push_back(1);
    std::cout<<"Size:"<<v.size()<<"\n";
    std::cout<<"Capacity:"<<v.capacity()<<"\n";
    v.push_back(2);
    std::cout<<"Size:"<<v.size()<<"\n";
    std::cout<<"Capacity:"<<v.capacity()<<"\n";
    v.push_back(3);
    std::cout<<"Size:"<<v.size()<<"\n";
    std::cout<<"Capacity:"<<v.capacity()<<"\n";
    v.resize(8);
    std::cout<<"Size:"<<v.size()<<"\n";
    std::cout<<"Capacity:"<<v.capacity()<<"\n";
    return 0;
}