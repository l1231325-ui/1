#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

class Animal {
    int age;
    string name;
    public:
    void setAge(int age) {
        this->age = age;
    }
    void setName(string name) {
        this->name = name;
    }
    int getAge() {
        return age;
    }
    string getName() {
        return name;
    }
    Animal(int a, string n) {
        this->age = a;
        this->name = n;
    }
    void makeSound(){}
};
class Dog : public Animal {
    string breed;
    public:
    void setBreed(string breed) {
        this->breed = breed;
    }
    string getBreed() {
        return breed;
    }
    Dog(int a, string n, string b):Animal(a, n) {
        this->breed = b;
    }
    void makeSound(){
        cout<<"Woof"<<endl;
    }
};

int main() {
    Dog b(10, "Lili", "Bulldog");
    cout<<b.getName()<<endl;
    cout<<b.getAge()<<endl;;
    b.makeSound();
}