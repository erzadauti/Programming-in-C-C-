/*CH-230-A
A10p8.c
Erza Dauti
edauti@constructor.university
*/


// Complex.h

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
  /* Real part of the complex number */
    double real;         
  /* Imaginary part of the complex number */
    double imaginary;   

public:
    /* Constructors */
    Complex();  
    /* Specific values of constructor */
    Complex(double realPart, double imaginaryPart);  
    Complex(const Complex& other); 

    ~Complex();

    /* Setting the real and the imaginary part of the complex number */
    void setReal(double realPart);          
    void setImaginary(double imaginaryPart); 

  
    /* Getting the real and the imaginary part of the complex number */
    double getReal() const; 
    double getImaginary() const;  

    /* Mathematical form of complex number */
    void print() const;

    /* The conjugate */
    Complex conjugate() const;

    /* Adding two complex numbers */
    Complex add(const Complex& other) const;    
    /* Subtraction of two complex numbers */  
    Complex subtract(const Complex& other) const;  
    /* Multiplicating two complex numbers */
    Complex multiply(const Complex& other) const;  
};

#endif // COMPLEX_H
