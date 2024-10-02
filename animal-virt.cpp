#include <iostream>
using namespace std;

class Animal {

private:
    string name;
    int legs;
    string sound;
    

public:

    Animal() : name(""), sound(""), legs(0){
        // Default Constructor
    }


    Animal(string animalName, string animalSound, int animalLegs){
        name = animalName;;
        sound = animalSound;;
        legs = animalLegs;
    }

    virtual void speak(){
        cout<<"Default Animal sound\n";
    }

};

class Dog:Animal{
    
public: 

    void speak() override{
        cout<<"Bark! Bark\n";
    }    
};

class Cat:Animal{
    
public: 

    void speak() override{
        cout<<"Meow! Meow!\n";
    }    
};


int main(){

    Animal a1;
    a1.speak();

    Dog G;
    G.speak();

    Cat Bob;
    Bob.speak();
    
    return 0;
}