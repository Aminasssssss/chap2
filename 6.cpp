#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main(){
int a, b, c;
cin >>a >>b>> c;

if (a+b>c>a-b && c>b-a && b+c>a && b-c<a && c-b<a && a+c>b && a-c<b && c-a<b){
    cout<<"YES";
}
else {
    cout<< "NO";
}
return 0;
}