#include <iostream>
// #include <csstring>
#include <list>
using namespace std;

class HashTable{
  private:
    static const int hashgroup = 10;
    list<pair<int,string>> table[hashgroup]

  public:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, string value);
    void removeItem(intem key);
    string searchTable(int key);
    void printTable();

};

bool HashTable::isEmpty() const{
  int sum = 0;
  for(int i = 0, i < hashGroup, i++){
    sum += table[i].size();
  }

  if(sum == 0){
    return true;
  }
  return false;
}

int HashTable::hashFuntion(int key){
  return key % hashgroup;
}

void HashTable::insertItem(int key, string value){
  
}