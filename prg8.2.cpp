#include<iostream>
using namespace std;
class Base{
    public:
         void normal(){
            cout<< "Base normal(early binding)\n";            
         }
         virtual void special(){
            cout<< "Base special(late binding)\n";
         }
};
class Derived : public Base{
    public:
         void normal(){
            cout<< "Derived normal(early binding)\n";            
         }
         void special() override{
            cout<< "Derived special(late binding)\n";
         }
};
int main(){
    Derived d;
    Base* p = &d;
    p->normal();
    p->special(); 
    return 0;
}