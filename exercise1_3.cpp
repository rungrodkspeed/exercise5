#include<iostream>
#include<string>
using namespace std;

int main(){
    string name[4]={"Cherprang","Music","Kaimook","Satchan"};
    string text = "";
    int i=0;
    while(i<4){
        text += name[i];
        i++;
    }
    cout << text;
    return 0;
}