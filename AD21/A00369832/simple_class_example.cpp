//Abraham González 
//Simple class example
//Example taken from Programming Hub

#include <iostream>
#include <math.h>

using namespace std;

class point {
    int x, y, z;
    
    public:
    //we make a constructor with default data
    point(){
        x=y=z=0;
    }

    //constructor with user input
    point(int i, int j, int k){
        x= i;
        y= j;
        z= k;
    }

    //using memory direction??
    point(point &a){
        x= a.x;
        y= a.y;
        z= a.z;
    }

    //methods
    void negate(){
        x= -x;
        y= -y;
        z= -z;
    }

    void print(){
        cout << "(" << x << "," << y << "," << z << ")\n";
    }

    int norm(){
        return(sqrt(x*x + y*y + z*z));
    }
};

//main function

int main(){
    point p(2,3,4), p1(p);

    cout << "The point has the coordinates " << endl;
    p.print();

    cout << "The point coordinates after negation " << endl;
    p.negate();
    p.print();

    cout << "Normal distance of the pont form (0, 0, 0) is: " << p.norm() << endl;

    cout << "The coordinates of the pont p1 after copy constructor is " << endl;
    p1.print();

    return 0;
}