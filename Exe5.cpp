#include <iostream>
using namespace std;
class Test {
public:
    void call() {
        static int compteur = 0; 
        compteur++;
        cout << "la fonction a appelée " << compteur << " fois." <<endl;
    }
};

int main() {
    Test t;
    
    t.call();
    t.call();
    t.call();
    t.call();
    t.call();

    return 0;
}
