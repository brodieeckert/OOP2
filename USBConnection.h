#include <stack>
#include <iostream>
using namespace std;
class USBConnection
{
private:
    int id;
    static int count;
    USBConnection(){ id = USBConnection::count++;};

public:

    static USBConnection* CreateUsbConnection(){
        if(count < 4){
            USBConnection* a = new USBConnection();
            return a;
            

        }
        return nullptr;
    }
    int get_id(){
        return this->id;
    }
    ~USBConnection();
};
int  USBConnection::count = 0;  

USBConnection::~USBConnection()
{
    USBConnection::count = this->id;
}
