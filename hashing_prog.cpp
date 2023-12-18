#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
class Hashing {
private:
  vector<list<int>> hashTable;
  int buckets;
public:
  Hashing(int s) {
    buckets = s;
    hashTable.resize(s);
  }
  int hashValue(int key) {
    return key % buckets;
  }
  bool add(int k) {
    int idx = hashValue(k);
    if (find(hashTable[idx].begin(), hashTable[idx].end(), k) == hashTable[idx].end()) {
      hashTable[idx].push_back(k);
      return true;
    } else {
      return false;
    }
  }
  list<int>::iterator search(int key) {
    int idx = hashValue(key);
    return find(hashTable[idx].begin(), hashTable[idx].end(), key);
  }
  bool deleteKey(int key) {
    int idx = hashValue(key);
    list<int>::iterator it = search(key);
    if (it != hashTable[idx].end()) {
      hashTable[idx].erase(it);
      return true;
    } else {
      return false;
    }
  }
  void displayKeys() {
    for (int i = 0; i < buckets; i++) {
      for (auto it = hashTable[i].begin(); it != hashTable[i].end(); it++) {
        cout << *it << " ";
      }
    }
  }
};
int main() {
  Hashing h = Hashing(10);
  h.add(3);
  h.add(4);
  h.add(6);
  h.add(1);
  h.add(19);
  cout << "Insertion of Keys Completed\n";
  cout << "Now Deleting some keys\n";
  for (int i = 0; i < 5; i++) {
    if (h.deleteKey(i)) {
      cout << "Key:" << i << " is Deleted\n";
    } else {
      cout << "Key Not Present\n";
    }
  }
  cout << "Displaying all keys:\n";
  h.displayKeys();
  return 0;
}
