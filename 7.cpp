#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main(){
int  a,b,c;
cin >>a>> b>> c;
if (a==b && a==c && c==b){
    cout<< "3";
}
else if(a==b || b==c || a==c){
    cout<<"2";
}
else{
    cout<< "0";
}
return 0;
}