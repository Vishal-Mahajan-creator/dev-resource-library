/*
Real-world Abstraction Example
*/

#include <iostream>
using namespace std;

class Database {
public:
    virtual void connect() = 0;
};

class MySQL : public Database {
public:
    void connect() {
        cout << "Connected to MySQL\n";
    }
};

class MongoDB : public Database {
public:
    void connect() {
        cout << "Connected to MongoDB\n";
    }
};

int main() {

    Database* db;

    MySQL sql;
    db = &sql;

    db->connect();
}