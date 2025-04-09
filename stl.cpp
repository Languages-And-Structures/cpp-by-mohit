//vector
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);    
    return 0;
}
// //Declaring a vector iterator
// display(vec1);
//     vector<int> :: iterator iter = vec1.begin();
//     vec1.insert(iter,566);
//     display(vec1);

//list
#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
    
    
        list<int> list2(3);  //empty list of length 3
        list<int> :: iterator it = list2.begin();
        *it = 45;
        it++;
        *it = 6;
        it++;
        *it = 9;
        it++;
     
        display(list2);
     
        return 0;
    //pop 
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);

    //remove
    list1.remove(9);
    display(list1);

    
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
    display(list1);
 
    return 0;
}
//maps
#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
 
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}
//Syntax for using .insert is:

//marksMap.insert({pair_1,pair_2......pair_n});
// Syntax for inserting pairs in map

//We will insert some elements into our map in snippet 2 by using the insert method.

 //marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );