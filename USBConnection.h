#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
class USBConnection{
private:
    static std::stack<int> ids;
    int ID;
    USBConnection(int id) : ID(id){}
public:
   
    ~USBConnection(){
        ids.push(ID);
    }
    static USBConnection* CreateUsbConnection(){
        if (!ids.empty()){
            int id=ids.top();
            ids.pop();
            return new USBConnection(id);
        }
        return nullptr;
    }
    int get_id() const{
        return ID;
    }
};
std::stack<int> USBConnection::ids=std::stack<int>({3, 2, 1});

#endif
