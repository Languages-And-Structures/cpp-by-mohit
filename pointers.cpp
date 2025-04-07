 //So, if a pointer contains the address of the first element of an array, we can use that pointer to access all the elements of the array.
//  #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[3] = {1, 2, 3};
    
//     int *ptr;
    
//     // assigning address of arr[0] to ptr
//     ptr = arr;
//     // ptr = &arr[0] will do the same thing
    
//     cout << "The elements of the array are: "
//          << ptr[0] << " "  // using ptr[0] instead of arr[0]
//          << ptr[1] << " "
//          << ptr[2] << endl;
    
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main () {
//     int  arr[5] = {10, 20, 30, 40, 50};
    
//     int *ptr1, *ptr2;
    
//     // assigning address of 1nd element of arr to ptr1
//     ptr1 = arr;
    
//     // assigning address of 5th element of arr to ptr2
//     ptr2 = &arr[4];
    
//     cout << "Value of ptr1 is: " << ptr1 << endl;
    
//     // using addition
//     cout << "Value of ptr1 + 2 is: " << ptr1 + 2 << endl
//          << endl;
    
//     cout << "Value of ptr2 is: " << ptr2 << endl;
    
//     // using subtraction
//     cout << "Value of ptr2 - 1 is: " << ptr2 - 1 << endl << endl;
    
//     return 0;
// }

//reference
// int a = 10;
// int &p = a; // It is correct
// // but
// int &p;
// p = a; // It is incorrect as we should declare and initialize references at single step
//opaque pointers
//A pointer that points to a data structure whose data is not visible at the time of the pointer's declaration is called an opaque pointer.
//struct api* ps;
// C++ allows us to assign NULL to opaque pointers.

// For Example:

// ps = NULL;
//pointer to  pointer main work in 2d array in allocating space
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {   
//     int m,n;
//     // Declare a double pointer.
//     int **arr;
    
//     // Dynamically allocating row space.
//     arr = new int*[n];

//     // Dynamically allocating column space.
//     for(int i=0;i<n;i++){
//        arr[i] = new int[m];
//     }
    
//    return 0;
// }
//trailing type declaration of function pointers'
// auto func(int, int) -> int {
//     //code
// }
//typedef auto (*fun_ptr)(int,int) -> int;
//callback functions
// #include <iostream>
// using namespace std;

// void fun_1(){
//     // fun_1 prints a statement to show that it has been called
//     cout << "Function - 1 is called." << endl;
//     return ;
// }

// // A callback function with the name fun_2
// void fun_2(void (*ptr)()){
//     // callback to function - 1
//     (*ptr) ();
//     cout << "Function - 2 is called." << endl;
//     return;
// }

// int main(){
//     void (*ptr)() = &fun_1;

//     // Calling fun_2 and passing the address of fun_1 as the parameter
//     fun_2(ptr);

//     return 0;
// }
// function pointer in c++ as return data type
// #include <iostream>
// using namespace std;

// // define the function pointer type
// typedef int (*ptr)(int);
// typedef ptr (*pointer)();

// int add(int x){
//     cout << "from the add function!" << endl;
//     return x + 5;
// }
 
// // function that returns a function pointer
// ptr print(){
//     cout << "The sum is ";
    
//     // function pointer is returned
//     return &add;
// }
 
// // Driver Code
// int main(){
//     // declare a variable
//     int x = 45;
    
//     // initialize a function pointer
//     pointer n = print;
    
//     // invoke the pointer and pass the variable as an argument
//     cout << (*n())(x) << endl;
 
//     return 0;
// }
//smart pointers and function with variable number and argument in c++;
//to do  and above last 3 codes



