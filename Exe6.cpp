#include <iostream>
using namespace std;

class Point {
private:
    float x, y;

public:
    Point(float a, float b) {
        x=a;
        y=b;
    }
    void deplace(float dx, float dy) {
        x += dx;
        y += dy;
    }
    void affiche() {
        cout << " les coordonnées: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(8.4, 0.0);
    p.affiche();
    p.deplace(-3.1, 3.3);
    p.affiche();

    return 0;
}
