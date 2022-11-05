#include<iostream>
using namespace std;

int exponent(int num1, int num2){
    int result = 1;
    for(int i = 1; i<= num2; i++){
        result = result * num1;
       
    }return result;

}


int main()
{
    cout<<exponent(3, 3);
    return 0;
}