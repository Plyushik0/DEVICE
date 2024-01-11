#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
protected:
    std::string name;
    double* serialNumber;
    

public:
    Device(const std::string& _name, double serialNumber);
    Device(const Device& other);
    Device& operator=(const Device& other);
    virtual ~Device();

    virtual void printInfo() const;
};

class Phone : public Device {
private:
    std::string phoneNumber;
    int* os;
public:
    Phone(const std::string& _name, const std::string& _phoneNumber, int os, int serialNumber);
    Phone(const Phone& other);
    Phone& operator=(const Phone& other);
    void printInfo() const override;
    ~Phone() ;
};

class SmartPhone : public Phone {
private:
    double* screenRes;
public:
    SmartPhone(const std::string& _name, const std::string& _phoneNumber, int os, double screenRes);
    SmartPhone(const SmartPhone& other);
    SmartPhone& operator=(const SmartPhone& other);
    void printInfo() const override;
    void installApp(const std::string& appName);
    ~SmartPhone();
};



#endif // DEVICE_H