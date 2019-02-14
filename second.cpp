/* second.cpp
 * Program to show the calling default/parameterized constructor 
 * */

#include <iostream>

class One{
    public:
         One(){
             std::cout<<"Calling default constructor"<<std::endl;
         }
         One(std::string Name){
             std::cout<<"Calling parmeterized constructor"<<std::endl;
             myName = Name;
         }
         void showMyName(){
             std::cout<<"My Name:"<<myName<<std::endl;
         }
    private:
         std::string myName;
};

int main()
{
    One a,b("Murali");
    a.showMyName();
    b.showMyName();
    return 0;
}
