//
// Created by Clirim on 3/19/2021.
//

// your code here
#include <iostream>
#include <cstring>

using namespace std;
class Table {
    int width;
    int height;
public:
    Table(int width = 1, int height = 1) {
        this->width = width;
        this->height = height;
    }
    void print() {
        cout << " Table: " << width << " " << height;
    }
};
class Room {
    Table table;
    int length;
    int width;
public:
    Room(int width = 1, int length = 1, Table table = {}) {
        this->table = table;
        this->width = width;
        this->length = length;
    }
    void print() {
        cout << " Room: "<< width << " " << length;
        table.print();
    }
};
class House {
    Room room;
    char address[50];
public:
    House(Room room = {}, char address[50] = " ") {
        this->room = room;
        strcpy(this->address, address);
    }
    void print() {
        cout << "Address: " << address; room.print(); cout << endl;
    }
};

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tableWidth, tableHeight;
        cin>>tableWidth;
        cin>>tableHeight;
        Table t(tableWidth, tableHeight);
        int rw, rl;
        cin>>rw;
        cin>>rl;
        Room r(rw, rl, t);
        char adresa[30];
        cin>>adresa;
        House h(r,adresa);
        h.print();
    }

    return 0;
}