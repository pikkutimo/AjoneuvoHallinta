#pragma once

#include "Address.h"
#include<string>
#include<memory>
#include<functional>

class Person {
    private:
        std::string mName;
        int mAge;
        std::shared_ptr<Address> mAddress;
    public:
        static int mNumberOfPersons;
        Person();
        Person(const std::string& name, const int& age);
        Person(const std::string& name, const int& age, const Address& address);
        Person(const std::string& name, const int& age, const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch);
        Person(const Person& Person);
        virtual ~Person();
        void setName(const std::string& name);
        void setAge(int age);
        void setStreetAddress(const std::string& streetAddress);
        void setPostalNumber(const std::string& postalNumber);
        void setPostalBranch(const std::string& postalBranch);
        std::string getName() const;
        int getAge() const;
        std::string getStreetAddress() const;
        std::string getPostalNumber() const;
        std::string getPostalBranch() const;
        virtual void printPersonDetails() const;
        static int getNumberOfPersons();
};