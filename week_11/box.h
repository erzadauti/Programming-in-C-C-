/*CH-230-A
A11p1.c
Erza Dauti
edauti@constructor.university
*/

// Box.h


#ifndef BOX_H
#define BOX_H

class Box {
private:
    double height;
    double width;
    double depth;

public:
    Box(); 
    Box(double h, double w, double d); 
    Box(const Box &other); 
    ~Box(); 

    double getHeight() const;  
    void setHeight(double h); 
    double getWidth() const; 
    void setWidth(double w); 
    double getDepth() const; 
    void setDepth(double d); 

    double calculateVolume() const;
};

#endif // BOX_H
