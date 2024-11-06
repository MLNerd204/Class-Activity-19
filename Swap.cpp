#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
        *a = *b;
        *b = temp;
}

int main(){
    int x;
    int y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x;
    cin>>y;
    cout<<"Before: x = "<<x<<", y = "<<y<<endl;;

    swap(&x, &y);
    cout<<"After: x = "<<x<<", y = "<<y<<endl;
    return 0;
}
