#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Hashing{
    private:
    vector<list<int>> hashTable;
    int buckets;
    public:
    Hashing(int s){
        buckets=s;
        hashTable.resize(s);
    }
    int hashValue(int key){
        return key%buckets; //using divison method
    }
    void add(int k){
        int idx=hashValue(k);
        hashTable[idx].push_back(k); //ll function push back not of vector
    }
    list<int>::iterator search(int key){
        int idx=hashValue(key);
        return find(hashTable[idx].begin(),hashTable[idx].end(),key);
    }
    void deleteKey(int key){
        int idx=hashValue(key);
        if(search(key)!=hashTable[idx].end()){ //if key is present
        hashTable[idx].erase(search(key));
        cout<<"Key:"<<key<<" is Deleted\n";
        }else{
            cout<<"Key Not Present\n";
        }
    }
};
int main(){
    Hashing h=new Hashing(10);
    for(int i=0;i<10;i++){
        h.add(i);
    }
    cout<<"Insertion of Keys Completed\n";
    cout<<"Now Delete Some Keys:";
    for(int i=0;i<3;i++){
        h.deleteKey(i);
    }
    delete h;
    return 0;
}