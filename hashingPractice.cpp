#include <iostream>
#include <iomanip>
#include <string>

//set table size
const int tableSize = 5;


        //input the constant string key
int hashF(const std::string& key){
    int hashVal = 0;
    //for what ever length the key is, add the key to the vash value.
    for(int i=0; i<key.length(); i++){
        hashVal = hashVal + key[i];
    }

    //find the remainder of the hash value. TO turn key into a index value
    return (hashVal%tableSize);
}

                    //put in the hash table name
void displayHashTable(std::string ht[]){
    //for whatever the table size is
    for(int i=0; i<tableSize; i++){
        //Go through and print out each value after hash
        std::cout << std::setw(3) << i << std::setw(10) << ht[i] << "\n";
    }
}

void displayHashAddresses(std::string ht[]){

    for(int i=0; i<tableSize; i++){
        std::cout << i <<  std::setw(3) << std::setw(20) << &ht[i] << "\n";
    }
}



int main(){
    std::string hashTable[tableSize];

    std::string s = "1";
    hashTable[hashF(s)] = s;

    s = "2";
    hashTable[hashF(s)] = s;

    s = "3";
    hashTable[hashF(s)] = s;

    s = "4";
    hashTable[hashF(s)] = s;

    s = "5";
    hashTable[hashF(s)] = s;

    s = "6";
    hashTable[hashF(s)] = s;

    std::cout << "============ H A S H  |  T A B L E ===========" << " \n";
    displayHashTable(hashTable);
    std::cout << "\n\n";

    std::cout << "============ H A S H  |  A D D R E S S  |  T A B L E ===========" << " \n";
    displayHashAddresses(hashTable);
    std::cout << "\n\n";

    return 0;
}