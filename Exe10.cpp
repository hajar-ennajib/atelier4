#include<iostream>
#include<string>
using namespace std;
   void DH(string &c){
    if(c.length()!=12){
        cout<<"incorrect ! "<<endl;
        
    }
    string jour=c.substr(0,2);
    string mois=c.substr(2,2);
    string an=c.substr(4,4);
    string heure=c.substr(8,2);
    string min=c.substr(10,2);
    cout<<"la date : "<<jour<<"/"<<mois<<"/"<<an<<"\t"<<"l'heure : "<<heure<<":"<<min<<endl;
   }
   int main(){
    string c="050720031509";
    DH(c);
    return 0;
   }