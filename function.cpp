//A friend function in C++ allows access to private and protected members of a class, even though it is not a member of that class. It's declared using the keyword "friend" inside the class
// #include<iostream>
// using namespace std;

// // 1 + 4i
// // 5 + 8i
// // -------
// // 6 + 12i 
// class Complex{
//     int a, b;
//     friend Complex sumComplex(Complex o1, Complex o2);
//     public:
//         void setNumber(int n1, int n2){
//             a = n1;
//             b = n2;
//         }

//         // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
//         void printNumber(){
//             cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// Complex sumComplex(Complex o1, Complex o2){
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b+o2.b))
//     ;
//     return o3;
// }

// int main(){
//     Complex c1, c2, sum;
//     c1.setNumber(1, 4);
//     c1.printNumber();

//     c2.setNumber(5, 8);
//     c2.printNumber();

//     sum = sumComplex(c1, c2);
//     sum.printNumber();

//     return 0;
// }

// /* Properties of friend functions
// 1. Not in the scope of class
// 2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
// 3. Can be invoked without the help of any object
// 4. Usually contans the objects as arguments
// 5. Can be declared inside public or private section of the class
// 6. It cannot access the members directly by their names and need object_name.member_name to access any member.

// */
// int a = 15; // Normal declaration
// int &b = a; // Reference declaration
// int a = 15; // Variable declaration.
// int &b = a; // This reference variable declaration is possible.
// int c = 12; // Another variable declared.
// &b = c; // Cannot change the reference of a reference variable.
// C++ code to calculate the absolute value of a number.
// #include <iostream>
// using namespace std;

// // Function having int type parameter.
// int Fun1(int abs){
//     if (abs < 0)
//         abs = -abs;
//     return abs;
// }

// // Function having float type parameter.
// float Fun1(float abs) {
//     if (abs < 0.0)
//          abs = -abs;
//     return abs;
// }


// int main() 
// {
//     // Function calling for int parameter.
//     cout << "The absolute value for -10 is : " << Fun1(-10) << endl;

//     // Function calling for float parameter.
//     cout << "The absolute value for 12.3 is : " << Fun1(12.3f) << endl;
//     return 0;
// }
