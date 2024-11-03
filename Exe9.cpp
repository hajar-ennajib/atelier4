#include<iostream>
using namespace std;
struct element{
    int valeur ;
    element*next;
};
class liste{
    private:
    element *tete;
    public:
    liste(){
        tete=nullptr;
    }
    void ajouter (int valeur){
        element*nv=new element;
        nv->valeur=valeur;
        nv->next=tete;
        tete=nv;
    }
    void supprimer(){
        if(tete!=nullptr){
            element *s=tete;
            tete=tete->next;
            delete s;
        }
        else{
            cout<<"n'existe aucun element pour supprimer ! "<<endl;
        }
    }
    void afficher(){
        element *c=tete;
        while (c!=nullptr)
        {
            cout<<c->valeur<<"\t";
            c=c->next;
        }
        cout<<endl;
        
    }
    ~liste(){
        while (tete!=nullptr)
        {
            supprimer();
        }
        
    }

};
int main(){
 liste l;
 l.ajouter(55);
 l.ajouter(3);
 l.ajouter(66);
 l.ajouter(7);
 l.afficher();
 l.supprimer();
 l.afficher();   
}