#include<iostream>
using namespace std ;
class Fichier{
    private:
    char *ptr;
    int longueue;
    public:
    Fichier(int l){
        longueue=l;
        ptr=nullptr;
    }
    void creation(){
        if(ptr==nullptr){
            ptr=new char[longueue];
        }

    }
    void remplit(){
        if(ptr!=nullptr){
            for(int i=0;i<longueue;i++){
                ptr[i]= 'A' ;
            }
            cout<<" bien remplit  ! ! "<<endl;
        }
        else cout<<" error ! ! "<<endl;
    }
    void afficher(){
        if(ptr!=nullptr){
            cout<<" affichage : ";
            for(int i=0;i<longueue;i++){
                cout<<ptr[i]<<" ";
            }
            cout<<endl;
        }
        else cout <<" error ! ! "<<endl;
    }
    ~Fichier(){
        delete[] ptr;
        cout<<" vide ! ! ";
    }

};
int main (){
    Fichier *fich=new Fichier(5);
    fich->creation();
    fich->remplit();
    fich->afficher();
    delete fich;
    return 0;


}