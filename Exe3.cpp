#include<iostream>
#include<string>
using namespace std ;
class Person {
    protected:
    string nom;
    string prenom;
    string date_naissance;
    Person(string n,string p,string d){
        nom=n;
        prenom=p;
        date_naissance=d;
    }
    virtual void afficher(){
        cout<<"nom : "<<nom<<"\nprenom : "<<prenom<<"\ndate de naissance :"<<date_naissance<<endl;

    }
};
class Employe:public Person{
    private:
    float salaire;
    public:
    Employe(string n ,string p,string d,float s):Person(n,p,d){
        salaire=s;
    }
    void afficher() override{
        Person::afficher();
        cout<<"\nsalaire : "<<salaire;
    }
};
class Chef:public Employe{
    private:
    string service;
    public:
    Chef(string n, string p,string d,float s,string se):Employe(n,p,d,s){
        service=se;
    }
    void afficher() override{
        Employe::afficher();
        cout<<"\nservice : "<<service;
            }
};
class Directeur: public Chef{
    private:
    string societe;
    public:
    Directeur(string n,string p,string d,float s,string se,string so):Chef(n,p,d,s,se){
        societe=so;
    }
    void afficher() override{
        Chef::afficher();
        cout<<"\n societe : "<<societe;
    }

};
int main(){
     Directeur di("ahmad","khalil","20/07/1987",5000.50,"informatique","FST");
     di.afficher();
   return 0;
}
