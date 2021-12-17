#pragma once

#include<string>

class Address {
    private:
        std::string mStreetAddress;
        std::string mPostalNumber;
        std::string mPostalBranch;
    public:
        Address();
        Address(const std::string& street, const std::string& postalNumber, const std::string& postalBranch);
        Address(const Address& address);
        ~Address();
        void setStreetAddress(const std::string& streetAddress);
        void setPostalNumber(const std::string& postalNumber);
        void setPostalBranch(const std::string& postalBranch);
        std::string getStreetAddress() const;
        std::string getPostalNumber() const;
        std::string getPostalBranch() const;
        void printAddress() const;
};