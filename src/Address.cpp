#include "Address.h"
#include<iostream>

Address::Address() : mStreetAddress{"Unknown"}, mPostalNumber{"-"}, mPostalBranch{"-"}
{
}

Address::Address(const std::string& streetAddress, const std::string& postalNumber, const std::string& postalBranch) : 
mStreetAddress{streetAddress}, mPostalNumber{postalNumber}, mPostalBranch{postalBranch}
{
}

Address::Address(const Address& address) :
mStreetAddress{address.mStreetAddress}, mPostalNumber{address.mPostalNumber}, mPostalBranch{address.mPostalBranch}
{
}

Address::~Address()
{
}

void Address::setStreetAddress(const std::string& streetAddress)
{
    mStreetAddress = streetAddress;
}

void Address::setPostalNumber(const std::string& postalNumber){
    mPostalNumber = postalNumber;
}

void Address::setPostalBranch(const std::string& postalBranch)
{
    mPostalBranch = postalBranch;
}

std::string Address::getStreetAddress() const
{
    return mStreetAddress;
}

std::string Address::getPostalNumber() const
{
    return mPostalNumber;
}

std::string Address::getPostalBranch() const
{
    return mPostalBranch;
}

void Address::printAddress() const
{
    std::cout << mStreetAddress << std::endl;
    std::cout << mPostalNumber << std::endl;
    std::cout << mPostalBranch << std::endl;
}
