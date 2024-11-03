#include<iostream>
#include<cmath>
using namespace std ;
class vecteur3d {
    private:
    float x,y,z;
    public:
    vecteur3d(float x=0,float y=0,float z=0):x(x),y(y),z(z)
    {
    }
    void afficher(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    vecteur3d sommeParValeur(vecteur3d& v){
        return vecteur3d(x+v.x, y+v.y, z+v.z);
    }
    void sommeParAdresse(vecteur3d* v,vecteur3d* resultat){
        resultat->x=x+v->x;
        resultat->y=y+v->y;
        resultat->z=z-v->z;
    }
    void sommeParReference(vecteur3d& v,vecteur3d& resultat){
        resultat.x=x+v.x;
        resultat.y=y+v.y;
        resultat.z=z+v.z;
    }
    float produitScalaire(vecteur3d& v){
        return x*v.x+y*v.y+z*v.z;
    }
    bool coincide(vecteur3d& v){
        return x==v.x && y==v.y && z==v.z;
    }
    float norme(){
        return sqrt(x*x+y*y+z*z);
    }
    vecteur3d normeMaxParValeur(vecteur3d& v){
        return ( this->norme()>v.norme())? *this:v;
    }
    void normeMaxParAdresse(vecteur3d* v,vecteur3d *resultat){
        if(this->norme()>v->norme())  *resultat=*this;
        else *resultat=*v;
    }
    void normeMaxParReference(vecteur3d& v,vecteur3d& resultat){
        if(this->norme()>v.norme())   resultat=*this;
        else resultat=v;             
    }

};
int main(){
    vecteur3d v1(5.0,2.0,2.5);
    vecteur3d v2(9.0,0.0,7.2);
    cout<<"vecteur 1 : ";
    v1.afficher();
    cout<<"vecteur 2";
    v2.afficher();
    cout<<"somme par valeur : ";
    vecteur3d sommeV=v1.sommeParValeur(v2);
    sommeV.afficher();
    cout<<"somme par adresse : ";
    
       vecteur3d sommeA ;
       v1.sommeParAdresse(&v2,&sommeA);
    sommeA.afficher();
    vecteur3d sommeR;
    cout<<"la somme par reference :";
    v1.sommeParReference(v2,sommeR);
     sommeR.afficher();
     float produit=v1.produitScalaire(v2);
     cout<<"le produit scalaire :"<<produit<<endl;
     bool I=v1.coincide(v2);
     cout<<"les vecteur sont identique :"<<(I?"oui":"non")<<endl;
     cout<<"norme de la vecteur : "<<v1.norme()<<endl;
     cout<<"la norme maximale par valeur : ";
     vecteur3d maxV=v1.normeMaxParValeur(v2);
     maxV.afficher();
     cout<<"la norme maximale par adesse : ";
     vecteur3d maxA;
     v1.normeMaxParAdresse(&v2,&maxA);
     maxA.afficher();
     cout<<"la norme maximale par reference : ";
     vecteur3d maxR;
     v1.normeMaxParReference(v2,maxR);
     maxR.afficher();
    return 0;

}
