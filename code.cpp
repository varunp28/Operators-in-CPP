#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a1,a2;
    cout<< "Enter a1: ";
    cin>>a1;
    cout<< "Enter a2: ";
    cin>> a2;
    int andres = a1&a2;
    int orres=a1|a2;
    int exorres=a1^a2;
    int notres=~a1;
    int lshiftres=a1<<a2;
    int rshiftres=a1>>a2;
   
    cout<< "The resulting And output is: "<<andres<<endl;
    cout<<"The resulting Or Output is: "<< orres<<endl;
    cout<<"The resulting Exor ouput is: "<< exorres<<endl;
    cout<<"The resulting Not output is:"<<notres<< endl;
    cout<<"The resulting left shift output is: "<<lshiftres<< endl;
    cout<<"The resulting right shift output is : "<<rshiftres<< end l;
   
    return 0;


Q2
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a=19;
    int bit_to_be_set;
    int set_bit;
    cout<<"Enter the specified bit to be set: ";
    cin<<bit_to_be_set;
    set_bit=a|(1<<bit_to_be_set);
    cout<<"The new no is: "<<reset_bit;
    return 0;
   


}
