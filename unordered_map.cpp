#include <iostream>
#include <unordered_map>
using namespace std;
void displayRecord(const unordered_map<int, string>& record) {
    for (auto it : record) {
        cout << "Roll No: " << it.first << " Name: " << it.second << endl;
    }
}
void addRecord(unordered_map<int, string>& record, int rollNo, const string& name) {
    record[rollNo] = name;
}
void removeRecord(unordered_map<int, string>& record, int rollNo) {
    record.erase(rollNo);
}
int main() {
    unordered_map<int, string> record;
    record.insert(make_pair(1, "Anu"));
    record[2] = "Ghost";
    record[5] = "Price";
    displayRecord(record);
    addRecord(record, 3, "John");
    addRecord(record, 4, "Emma");
    cout << "After adding new records:" << endl;
    displayRecord(record);
    removeRecord(record, 2);
    cout << "After removing a record:" << endl;
    displayRecord(record);
    return 0;
}
