#include <iostream>
using namespace std;

int main(){
    double salesAmount;
    cout << "Enter the sales amount: " << endl;
    cin >> salesAmount;
    if(salesAmount < 10000){
        cout << "Your commission is " << salesAmount / 10;
        return 0;
    }
    if(salesAmount <= 15000){
        cout << "Your commission is " << salesAmount * 1.5 / 10;
        return 0;
    }
    cout << "Your commission is " << salesAmount / 5;
    return 0;
}
