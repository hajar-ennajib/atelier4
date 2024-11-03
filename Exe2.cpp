#include<iostream>
#include<string>
using namespace std ;
class Animal
{
    protected:
    string nom;
    int age;
    public:
    void set_value(string n,int a){
        nom=n;
        age=a;
    }
};
class Zebra:public Animal
{
    public:
    void display(){
        cout<<"nom : "<<nom<<"age : "<<age<<endl;
        cout<<" c'est un zebra !"<<endl;
    }

};
class Dolphin:public Animal{
   public:
   void display(){
     cout<<"nom : "<<nom<<"age : "<<age<<endl;
        cout<<"c'est un Dolphin !"<<endl;
   }
};
int main(){
    Zebra z;
    Dolphin d;
    z.set_value("couagga",5);
    d.set_value("neptune",6);
    z.display();
    d.display();
    return 0;
}