// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     // Creating a Constructor
//     // Constructor is a special member function with the same name as of the class.
//     //It is used to initialize the objects of its class
//     //It is automatically invoked whenever an object is created

//     Complex(void); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
// {
//     a = 10;
//     b = 0;
//     // cout<<"Hello world";
// }
// int main()
// {
//     Complex c1, c2, c3;
//     c1.printNumber();
//     c2.printNumber();
//     c3.printNumber();

//     return 0;
// }
//pramertrized constructor
// #include<iostream>
// using namespace std;


// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }
// int main(){
//     // Implicit call
//     Complex b(4, 6);
//     b.printNumber();

//     // Explicit call
//     Complex c = Complex(5, 7);
//     c.printNumber();

//     return 0;
// }
// #include <iostream>
// using namespace std;
//constructor overloading
// class Complex
// {
//     int a, b;

// public:
//     Complex(){
//         a = 0;//default constructor
//         b =0;
//     }

//     Complex(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     Complex(int x){
//         a = x;
//         b = 0;
//     }

  

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };
// int main()
// {
//     Complex c1(4, 6);
//     c1.printNumber();

//     Complex c2(5);
//     c2.printNumber();

//     Complex c3;
//     c3.printNumber();
//     return 0;
// }
//Constructors with Default Arguments in C++
// #include<iostream>
// using namespace std;

// class Simple{
//     int data1;
//     int data2;
//     int data3;

//     public:
//         Simple(int a, int b=9, int c=8){//default values
//             data1 = a;
//             data2 = b;
//             data3 = c;
//         }

//         void printData();

// };

// void Simple :: printData(){
//     cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
// }
// int main(){
//     Simple s(12, 13);
//     s.printData();
//     return 0;
// }the data 1 data 2 data 3 have values 12,13,8
//dynamically initilization of objects using class

// #include<iostream>
// using namespace std;


// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}//this default constructor is required because it helps the compiler to call canstructors for obhject making
//         BankDeposit(int p, int y, float r); // r can be a value like 0.04
//         BankDeposit(int p, int y, int r); // r can be a value like 14
//         void show();
// };
// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// void BankDeposit :: show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }
// int main(){
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;
    
    
//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }
//copy constructor
//#include<iostream>
// using namespace std;


// class Number{
//     int a;
//     public:
//         Number(){
//             a = 0;
//         }

//         Number(int num){
//             a = num;
//         }
//         // When no copy constructor is found, compiler supplies its own copy constructor
//         Number(Number &obj){
//             cout<<"Copy constructor called!!!"<<endl;
//             a = obj.a;
//         }

//         void display(){
//             cout<<"The number for this object is "<< a <<endl;
//         }
// };
// int main(){
//     Number x, y, z(45), z2;
//     x.display();
//     y.display();
//     z.display();

//     Number z1(z); // Copy constructor invoked
//     z1.display();

//     z2 = z; // Copy constructor not called
//     z2.display();

//     Number z3 = z; // Copy constructor invoked
//     z3.display();

//     // z1 should exactly resemble z  or x or y

//     return 0;//copy constructor will not be formed for assigment 
// }
//destructors
// #include<iostream>
// using namespace std;

// // Destructor never takes an argument nor does it return any value 
// int count=0;

// class num{
//     public:
//         num(){
//             count++;
//             cout<<"This is the time when constructor is called for object number"<<count<<endl;
//         }

//         ~num(){
//             cout<<"This is the time when my destructor is called for object number"<<count<<endl;
//             count--;
//         }
// };
// int main(){
//     cout<<"We are inside our main function"<<endl;
//     cout<<"Creating first object n1"<<endl;
//     num n1;
//     {
//         cout<<"Entering this block"<<endl;
//         cout<<"Creating two more objects"<<endl;
//         num n2, n3;
//         cout<<"Exiting this block"<<endl;
//     }
//     cout<<"Back to main"<<endl;
//     return 0;
// }




