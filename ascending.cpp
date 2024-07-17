#include <iostream>
using namespace std;

class Complex {
private:
    float real, img;

public:
    Complex() {
        real = 0;
        img = 0;
    }

    Complex(float a, float b) {
        real = a;
        img = b;
    }

    void accept() {
        cout << "Enter the complex number:\n";
        cout << "Real: ";
        cin >> real;
        cout << "Imaginary: ";
        cin >> img;
    }

    void display() const {
        cout << "Complex number is: " << real << " + " << img << "i\n";
    }

    friend Complex operator +(const Complex &c1, const Complex &c2) {
        return Complex(c1.real + c2.real, c1.img + c2.img);
    }

    friend Complex operator -(const Complex &c1, const Complex &c2) {
        return Complex(c1.real - c2.real, c1.img - c2.img);
    }

    Complex operator *(const Complex &c2) const {
        return Complex((real * c2.real) - (img * c2.img), (real * c2.img) + (img * c2.real));
    }

    Complex operator /(const Complex &c2) const {
        float denominator = (c2.real * c2.real) + (c2.img * c2.img);
        return Complex(((real * c2.real) + (img * c2.img)) / denominator, ((img * c2.real) - (real * c2.img)) / denominator);
    }
};

int main() {
    int ch;
    Complex c3;
    Complex c4(4, 5);
    Complex c5;
    
    c5.accept();
    
    cout << "1st ";
    c4.display();
    cout << "\n";
    
    cout << "2nd ";
    c5.display();
    cout << "\n";

    do {
        cout << "\nEnter your choice:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "Addition: ";
            c3 = c4 + c5;
            c3.display();
            break;
        case 2:
            cout << "Subtraction: ";
            c3 = c4 - c5;
            c3.display();
            break;
        case 3:
            cout << "Multiplication: ";
            c3 = c4 * c5;
            c3.display();
            break;
        case 4:
            cout << "Division: ";
            c3 = c4 / c5;
            c3.display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Enter a valid choice!\n";
            break;
        }
    } while (ch != 5);

    return 0;
}
