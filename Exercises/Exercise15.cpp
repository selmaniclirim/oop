//
// Created by Clirim on 4/5/2021.
//

#include <iostream>
#include <cstring>
using namespace std;


// vashiot kod ovde

class Pair {
    char * key;
    int value;

    void copyClass(const Pair & copier) {
        this->key = new char[strlen(copier.key) + 1];
        strcpy(this->key, copier.key);
        this->value = copier.value;
    }
public:
    Pair(char * key = "Default", int value = 02) {
        this->key = new char[strlen(key) + 1];
        strcpy(this->key, key);
        this->value = value;
    }

    Pair(const Pair & other) {
        copyClass(other);
    }

    void setKey(char * key) {
        delete[] this->key;
        this->key = new char[strlen(key) + 1];
        strcpy(this->key,key);
    }

    void setValue(int value) {
        this->value = value;
    }

    int getValue() const {
        return this->value;
    }

    friend ostream & operator << (ostream & output, const Pair & other) {
        output << "'[" << other.key << "]' -> [" << other.value << "]" << endl;
        return output;
    }

    Pair operator -- () {
        this->value -= 1;
        return *this;
    }

    Pair operator -- (int) {
        Pair temp_pair (*this);
        this->value -= 1;
        return temp_pair;
    }

    Pair operator * (const Pair & right) {
        Pair temp;

        if(strlen(this->key) < strlen(right.key))
            temp.setKey(this->key);
        else
            temp.setKey(right.key);

        temp.setValue(this->getValue()*right.getValue());

        return temp;
    }

    Pair operator = (const Pair & other) {
        delete[] this->key;
        copyClass(other);
        return *this;
    }

    ~Pair() {
        delete[] this->key;
    }
};

class Collection {
    Pair * pairs;
    int length;

    void copyClass(const Collection & other) {
        this->length = other.length;
        pairs = new Pair[this->length];
        for(int i = 0; i < length; i++) {
            this->pairs[i] = other.pairs[i];
        }
    }
public:
    Collection(int length = 0, Pair * pairs = {}) {
        this->length = length;
        this->pairs = new Pair[length];
        for(int i = 0; i < length; i++) {
            this->pairs[i] = pairs[i];
        }
    }

    Collection(const Collection & other) {
        copyClass(other);
    }
    int product() {
        int tot = 1;
        for(int i = 0; i < this->length; i++) {
            tot *= this->pairs[i].getValue();
        }
        return tot;
    }

    Collection operator += (const Pair & pair) {
        Pair * temp = new Pair[this->length + 1];
        for(int i = 0; i < this->length; i++) {
            temp[i] = this->pairs[i];
        }
        temp[this->length] = pair;
        delete[] this->pairs;
        this->length++;
        pairs = new Pair[length];
        for(int i = 0; i < this->length; i++) {
            this->pairs[i] = temp[i];
        }
        delete[] temp;
        return *this;
    }

    friend ostream & operator << (ostream & stream, const Collection & other) {
        stream << other.length << endl;
        for(int i = 0; i < other.length; i++) {
            stream << other.pairs[i] << endl;
        }
        return stream;
    }

    bool operator < (Collection & other) {
        return this->product() < other.product();
    }

    int greater(int value) {
        int count = 0;
        for(int i = 0; i < this->length; i++) {
            if(this->pairs[i].getValue() > value)
                count++;
        }
        return count;
    }
};



void read(char *k, float *v) {
    cin >> k;
    cin >> *v;
}
int main() {
    char key[50];
    float value;
    cout << "----- class Pair -----" << endl;
    read(key, &value);
    cout << "----- constructor -----" << endl;
    Pair p1(key, value);
    read(key, &value);
    Pair p2(key, value);
    Pair p3(p1);
    cout << "----- operator << -----" << endl;
    cout << p1;
    cout << p2;
    cout << "----- operator --(int) -----" << endl;
    cout << p1--;
    cout << p1;
    cout << "----- operator -- -----" << endl;
    cout << --p2;
    cout << "----- operator * -----" << endl;
    Pair p = p1 * p2;
    cout << "----- operator = -----" << endl;
    p3 = p;
    cout << p3;

    cout << "----- class Collection -----" << endl;
    cout << "----- constructor -----" << endl;
    Collection k;
    cout << "----- operator += -----" << endl;
    k += p1;
    k += p2;
    k += p3;
    cout << "----- operator << -----" << endl;
    cout << k;
    cout << "----- copy constructor -----" << endl;
    Collection k2(k);
    cout << "----- operator < -----" << endl;
    if(k < k2) {
        cout << "k < k2" << endl;
    } else {
        cout << "k >= k2" << endl;
    }
    k2 += p1;
    if(k < k2) {
        cout << "k < k2" << endl;
    } else {
        cout << "k >= k2" << endl;
    }
    cout << "----- greater -----" << endl;
    int x;
    cin >> x;
    int pp = k.greater(x);
    cout << pp;
    return 0;
}