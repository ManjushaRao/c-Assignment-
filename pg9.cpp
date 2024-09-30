// P9. Create a class called Teacher that inherits fr`om Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher
//

#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        virtual void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student:public Person{
        public:
                Student(string name,int age,string department ):Person(name,age){
                        this->department=department;
                }

                void print_info() override{
                        cout << " I am " <<getName() <<",I am " <<getAge() <<" years old and I study in the " <<department << "department." <<endl;
                }`
        private:
                string department;
};
class Teacher:public Person{
        public:
                Teacher(string name,int age,int salary):Person(name,age){
                        this->salary = salary;
                }
                void print_info() override{
                        cout<< "I am " << name << " and i am" << age << " years old and my salary is " << salary << "."<<endl;
                }
        private:
                int salary;
};

int main() {
    // Create a person object with name and age`
    Person person1("vamshika", 25);
    Student student1("alisa",21,"ECE");
   // Teacher teacher1("madav",56,10000);
    person1.print_info();
    student1.print_info();
   // teacher1.print_info();

    return 0;
}
