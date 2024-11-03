#include<iostream>
#include<vector>
using namespace std ;
class Pile
{
private:
     vector<int>element ;
public:
    Pile(){};
    void push(int valeur){
        element.push_back(valeur);
    }
    void pop(){
        if(element.empty()){
            cout<<"la pile est deja vide <<endl";
        }
        else {
            element.pop_back();
        }
    }
    void afficher(){
        cout<<"verifcation : ";
        for (int i = 0; i < element.size(); i++)
        {
            cout<<element[i]<<"\t";
        }
        cout<<"\n";
    }
};
         int main(){
            Pile p1,p2;
            cout<<"\t empiler P1 \t:";
            p1.push(3);
            p1.push(1);
            p1.push(6);
            p1.push(4);
            p1.afficher();
            cout<<"\t depiler P1 \t:";
            p1.pop();
            p1.afficher(); 
            cout<<"\t empiler P2 \t:";
            p2.push(50);
            p2.push(2);
            p2.afficher();
            cout<<"\t depiler P2 \t:";
            p2.pop();
            p2.afficher();
            return 0;


         }
