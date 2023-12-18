#include <iostream>
#include <map>
using namespace std;
int main() {
    //keys must be unique
  map<int, string> m1 = {
    {1, "Anu"},
    {2, "Boo"},
    {3, "Foo"},
  };
  m1[4] = "Pro";
  m1[5] = "Halo";
  m1[6]="Boo";
//   for (auto& pair: m1) {
//     cout << pair.first << " " << pair.second << endl;
//   }
for(auto ele:m1){
    cout<<"Key:"<<ele.first<<" value:"<<ele.second<<endl;
}
cout<<"Now traversing using the iterator\n";
map<int,string>::iterator itr;
for(itr=m1.begin();itr!=m1.end();itr++){
    cout<<itr->first<<" "<<itr->second<<"\n";
}
cout<<"Now Reverse\n";
map<int,string>::reverse_iterator ritr;
for(ritr=m1.rbegin();ritr!=m1.rend();ritr++){
    cout<<ritr->first<<" "<<ritr->second<<"\n";
}
cout<<"Size of the Map:"<<m1.size()<<"\n";
cout<<"Max Size of the map:"<<m1.max_size()<<"\n";
return 0;
}
