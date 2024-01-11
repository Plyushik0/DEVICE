#include "Header.h"
#include <iostream>
int main()
{

    
   
    Phone* copyphone = phone;

  
    Device* devices[6];
    devices[0] = device;
    devices[1] = phone;
    devices[2] = smartphone;
    devices[3] = tablet;
    devices[4] = copyphone;
    
    SmartPhone* smartphone1 = new SmartPhone("Samsung Galaxy Z Fold 5", "123512351235", "Android 14");
    copyphone = smartphone1;
   
    
    for (int i = 0; i < 5; i++) {
        devices[i]->printInfo();
        std::cout << "-----------------------" << std::endl;
    }
  
    devices[5] = copyphone;
    devices[5]->printInfo();
    std::cout << "-----------------------" << std::endl;
    
    smartphone->installApp("Telegram");
    tablet->viewWebsite("https://web.telegram.org");
 

    
    delete device;
    delete phone;
    delete smartphone;
    delete tablet;


    return 0;
}

