﻿#include <iostream>
using namespace std;

class A {
public:
     void set_a(int a) { this->a = a; }
     int get_a() { return this->a; }

private:
    int a;
};

class B {
public:
    void set_b(int b) { this->b = b; }
    int get_b() { return this->b; }
    void set_newA(int a);
    int get_newA();
    

private:
    int b;
    A a_b;

};

void B::set_newA(int c) {
a_b.set_a(c);

}

int B::get_newA() {
return a_b.get_a();

}

int main() {
    B bb;
    bb.set_newA(6);
    cout << bb.get_newA() << endl;
}
