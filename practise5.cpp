#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        
        Rectangle() {
            length = 0;
            width = 0;
        }

        
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

      
        int area() {
            return length * width;
        }

      
        void display() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

int main() {
    
    Rectangle rect1;             
    Rectangle rect2(10, 5);      


    cout << "Rectangle 1:" << endl;
    rect1.display();
    cout << "Area: " << rect1.area() << endl << endl;

    cout << "Rectangle 2:" << endl;
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    return 0;
}
