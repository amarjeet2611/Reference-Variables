#include<iostream>
using namespace std;
//this line of code will give a warning bcoz of local varibale
int& func(int a){
int num=a;
int& ans=num;
return ans;

}
//create a function using reference variable
void update1(int& n){
    n++;
}

void update(int n){

    n++;
}

int main(){

int n=5;
cout<<"Before: "<<n<<endl;
update(n);
cout<<"After: "<<n<<endl;


cout<<"Before: "<<n<<endl;
update1(n);
cout<<"After: "<<n<<endl;
return 0;
}