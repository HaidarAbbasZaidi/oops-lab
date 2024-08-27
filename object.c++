#include <iostream>
using namespace std;

class calc
{    
public:
int num1;
int num2;
void setNum(int a,int b){
    num1 = a;
    num2 = b;
}
int getSum(){
    return num1 + num2 ;
}
int getDiff(){
    return num1-num2;
}
};

int main(){
    calc myobj;
    myobj.setNum(45,90);
    cout << myobj.getSum() << endl;
    cout << myobj.getDiff(); 
}
