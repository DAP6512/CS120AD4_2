#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int max;
    cin >> num1 >> num2 >> num3;
    max = num1;
    if (num1 > num2){
        if(num1 > num3){
        }else{
            max = num3;
        }
    }else{
        max = num2;
        if(num2 > num3){
        }else{
            max = num3;
        }
    }
    cout << "The biggest number is  " << max << endl;
}