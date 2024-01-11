#include "Header.h"
#include <iostream>
#include <string>




Device::Device(const std::string& _name, double serialNumber) {}

Device::Device(const Device& other) : name(other.name), serialNumber(other.serialNumber){}

Device& Device::operator=(const Device& other) {
    if (this != &other) {
        delete &name;
        delete serialNumber;
        name = other.name;
        serialNumber = new double(*other.serialNumber);
    }
    return *this;
}

Device::~Device() {
    delete serialNumber;
}

void Device::printInfo() const {
    std::cout << "Device Name: " << name << std::endl;
    std::cout << "Serial Number: " << serialNumber << std::endl;
}


Phone::Phone(const std::string& _name, const std::string& _phoneNumber, int serialNumber, int os)
    : Device(_name, serialNumber), phoneNumber(_phoneNumber) {}

Phone::Phone(const Phone& other)
    : Device(other), phoneNumber(other.phoneNumber), os(other.os) {}

Phone& Phone::operator=(const Phone& other) {
    if (this != &other) {
        Device::operator=(other);
        delete os;
        phoneNumber = other.phoneNumber;
        os = new int(*other.os);
    }
    return *this;
}
Phone::~Phone() {
    delete os;
    delete &name;
    delete &phoneNumber;


}

void Phone::printInfo() const {
    std::cout << "Device Name: " << name << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
}




SmartPhone::SmartPhone(const std::string& _name, const std::string& _phoneNumber, int _os, double screenRes)
    : Phone(_name, _phoneNumber, _os, screenRes)
{
}

SmartPhone::SmartPhone(const SmartPhone& other)
    : Phone(other), screenRes(other.screenRes) {}

SmartPhone& SmartPhone::operator=(const SmartPhone& other) {
    if (this != &other) {
        delete& name;
        delete serialNumber;
        name = other.name;
        serialNumber = new double(*other.serialNumber);
    }
    return *this;
}
SmartPhone::~SmartPhone() {
    delete& name;
    delete serialNumber;

}

void SmartPhone::printInfo() const {
    std::cout << "Device Name: " << name << std::endl;
    std::cout << "Screen Res: " << screenRes << std::endl;
    
}

void SmartPhone::installApp(const std::string& appName) {
    std::cout << "Installing app: " << appName << std::endl;
}



