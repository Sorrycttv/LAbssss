﻿#include <iostream>

class Person
{
private:
    std::string name;
    unsigned age;
public:
    Person(std::string p_name, unsigned p_age);
    Person(std::string p_name);
    void print();
};
// конструктор
Person::Person(std::string p_name, unsigned p_age)
{
    name = p_name;
    age = p_age;
}
// делегирование конструктора
Person::Person(std::string p_name) : Person(p_name, 18)
{  }

void Person::print()
{
    std::cout << "Name: " << name << "\tAge: " << age << std::endl;
}
int main()
{
    Person tom{ "Tom", 39 };
    tom.print();    // Name: Tom   Age: 39
    Person bob{ "Bob" };
    bob.print();    // Name: Bob   Age: 18
}