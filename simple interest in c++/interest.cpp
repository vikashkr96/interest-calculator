// Calculating the simple interest in c++
#include <iostream>
using namespace std;
int main() {
    float p;
    float r;
    float t;
    cout<<"Enter the principle amount:"<<endl;
    cin>>p;
    cout<<"Enter the rate of the interest(in %) :"<<endl;
    cin>>r;
    cout<<"Enter the time of the interest(in year) : "<<endl;
    cin>>t;
    float interest=(p*r*t)/100;
    cout<<"Your total interest is :"<<interest;
    
    
   
    return 0;
}