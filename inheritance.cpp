 // Derived Class syntax
//class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }

 #include <iostream>
using namespace std;

// Base Class
class Employee
{
        
public:
        int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
 
};
int main()
{
    Employee harry(1), rohan(2);
   
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    
    return 0;
}

//single inheritance
class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}
class Derived : public Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}
/*	Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited              	Not Inherited              	Not Inherited              
Protected members           	Protected                    	Private                         	Protected                    
Public members           	Public	Private                         	Protected  */

//multilevel inhertance
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths are: " << maths << endl;
    cout << "The marks obtained in physics are: " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}

//virtual keyword for using methods it helps in function overrinding
//With virtual function
#include <iostream>

using namespace std;

class Polygon {
    protected: int height,
    width;
    public: void set_values(int x, int y) {
        width = x;
        height = y;
    }
    virtual int area() {
        return 0;
    }
};

class Rectangle: public Polygon {
    public: int area() {
        return width * height;
    }
};

class Triangle: public Polygon {
    public: int area() {
        return (width * height / 2);

    }
};

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    Polygon * ppoly1 = & rect;
    Polygon * ppoly2 = & trgl;
    Polygon * ppoly3 = & poly;

    ppoly1 -> set_values(10, 20);
    ppoly2 -> set_values(10, 20);
    ppoly3 -> set_values(10, 20);

    cout << "Area of Rectangle is: " << ppoly1 -> area() << '\n';
    cout << "Area of Triangle is: " << ppoly2 -> area() << '\n';
    cout << "Area of Polygon is: " << ppoly3 -> area() << '\n';
    return 0;
}
//Pure Virtual Function
//A Pure Virtual Function is a virtual function declared in the base class without definition. In simple words, it does nothing in the base class. But the derived class must provide an implementation for this function. Otherwise, we'll get a compilation error.


