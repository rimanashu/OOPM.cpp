#include <iostream>
using namespace std;
class person{
    public:
    void show(){
        cout<<"person"<<endl;
    }
};
class employ:public person{};
class manager : public employ{
    public:
    void  showmanager(){
        cout<<"manager";
    }
};

int main(){
    manager a;
    a.show();
    a. showmanager();

return 0;
}

