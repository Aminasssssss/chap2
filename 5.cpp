#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;


int main(){
int  a, b, c;
cin >> a>> b>> c;
int k;

int l;

if (a>=c){
    k=b*2;
}
else if(a<c){
    l=c/a;
    k=l*b*2;
}


cout<< k;



return 0;
}