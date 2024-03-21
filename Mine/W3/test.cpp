#include <iostream>

class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    // Constructor
    ComplexNumber(double realPart, double imaginaryPart)
    {
        real = realPart;
        imaginary = imaginaryPart;
    }

    // Getter methods
    double getRealPart() const
    {
        return real;
    }

    double getImaginaryPart() const
    {
        return imaginary;
    }

    // Setter methods
    void setRealPart(double realPart)
    {
        real = realPart;
    }

    void setImaginaryPart(double imaginaryPart)
    {
        imaginary = imaginaryPart;
    }

    // Input method
    void input()
    {
        std::cout << "Enter real part: ";
        std::cin >> real;
        std::cout << "Enter imaginary part: ";
        std::cin >> imaginary;
    }

    // Output method
    void output() const
    {
        std::cout << "(" << real << " + " << imaginary << "i)";
    }

    // Addition method
    ComplexNumber add(const ComplexNumber &other) const
    {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return ComplexNumber(sumReal, sumImaginary);
    }
};

int main()
{
    // Example usage
    ComplexNumber num1(3, 4);
    ComplexNumber num2(1, -2);

    std::cout << "Number 1: ";
    num1.output();
    std::cout << std::endl;

    std::cout << "Number 2: ";
    num2.output();
    std::cout << std::endl;

    ComplexNumber sum = num1.add(num2);
    std::cout << "Sum: ";
    sum.output();
    std::cout << std::endl;

    return 0;
}
