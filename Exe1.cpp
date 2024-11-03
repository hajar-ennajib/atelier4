#include <iostream>
using namespace std;
class Complex {
   
    private: 
      double reel ;
      double imaginaire ;
    public:
      Complex(double r=0, double im=0):reel(r),imaginaire(im){ }
      bool operator==(const Complex& other){
            return reel==other.reel && imaginaire==other.imaginaire;
        }
      Complex operator+(const Complex& other){
        return Complex (reel + other.reel,imaginaire + other.imaginaire);
      }
      Complex operator-(const Complex& other){
        return Complex (reel - other.reel , imaginaire-other.imaginaire);
      }
      Complex operator*(const Complex& other ){
        return Complex(reel*other.reel - imaginaire*other.imaginaire,reel*other.imaginaire+imaginaire*other.reel);
        }
        Complex operator/(const Complex& other){
            double denominator = other.reel * other.reel + other.imaginaire * other.imaginaire;
        return Complex((reel * other.reel + imaginaire * other.imaginaire) / denominator,(imaginaire * other.reel - reel * other.imaginaire) / denominator);
    
        } 
        
        void display (){
            cout<<reel<<"+"<<imaginaire<<"i"<<endl;
        }
};
     int main(){
        Complex C1,C2,resultat;
        double rel1,rel2,im1,im2;
        int i;
        cout<<"entrer la partie reelle = ";
        cin>>rel1;
        cout<<"entrer la partie imaginaire = ";
        cin>>im1;
           C1=Complex(rel1,im1);
        cout<<"entrer la partie reelle = ";
        cin>>rel2;
        cout<<"entrer la partie imaginaire = ";
        cin>>im2;
         C2=Complex(rel2,im2);
        cout<<"1:egalite\n2:addition\n3:soustraction\n4:multiplication\n5:division\n";
        cout<<" choisissez l'operation que vous voulez ! ";
        cin>>i;
        switch (i)
        {
        case 1:
             cout<<"egalite : "<<( C1==C2 ? "egale":"pas egal")<<endl;
            break;
        case 2 :
        resultat=C1+C2;
        resultat.display();
        break;
        case 3: 
        resultat=C1-C2;
        resultat.display();
        break;
        case 4:
        resultat=C1*C2;
        resultat.display();
        break;
        case 5 : 
        resultat=C1/C2;
        resultat.display();
        break;
        default:
        cout<<"votre choix n'existe pas "<<endl;
        }
        return 0;

     } 