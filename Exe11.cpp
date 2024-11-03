#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
class traitement{
    private:
    vector<int>valeur;
    public:
    void intialisation (){
        cout<<"saisir 15 entiers pairs : "<<endl;
        for(int i=0;i<15;i++){
            int v;
            cin>>v;
            while(v %2!=0 || v==0){
                cout<<" un enier pair non null : ";
                cin>>v;
            }
            valeur.push_back(v);
        }
    }
    void show(int index=0){
        if(index<valeur.size()){
            cout<<valeur[index]<<" ";
            show(index+1);
        }
        else if (index==0){
            cout<<"viide !! "<<endl;
        }
        else cout<<endl;
    }
    friend double moyenne( traitement&t){
        if(t.valeur.empty()) return 0.0;
        double s=0;
        for(int val:t.valeur){
            s+=val;
        }
        return s/t.valeur.size();
    }
    friend double mediane(traitement t){
        if(t.valeur.empty())return 0.0;
        sort(t.valeur.begin(),t.valeur.end());
        int taille=t.valeur.size();
        if(taille%2==0){
            return(t.valeur[taille/2-1]+t.valeur[taille/2])/2.0;
        }
        else return t.valeur[taille/2];
    }

};
 int main(){
    traitement t;
    t.intialisation();
    cout <<"les element";
    t.show();
    cout<<"le moyenne : "<<moyenne(t)<<endl;
    cout<<"le mediane : "<<mediane(t)<<endl;
 }