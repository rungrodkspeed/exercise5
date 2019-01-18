#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int i=0;
    int y=0;
    int x[4]={4,-1,-2};
    while(i<4){
        y+=(i+1)*pow(x[i],2);
        i++;
    }
    cout << y;
    return 0;
}