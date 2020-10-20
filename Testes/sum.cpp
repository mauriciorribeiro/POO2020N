#include <iostream>
using namespace std;

int sum(int a, int b){
    int s;
    s=a+b;
    a++;
    return s;
}

int main(void){

    int v[] {1,2,3};
    cout << v[0] << endl;
    cout << sum(v[0],v[1]) << endl;
    cout << v[0] << endl;

}