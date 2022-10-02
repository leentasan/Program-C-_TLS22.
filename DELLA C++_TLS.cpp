#include <iostream>

using namespace std;

double height, weight, BMI;
int main()
{
    cout<< "Enter your height(in m)" << endl; cin >> height;
    cout<< "Enter your weight(in kg)" << endl; cin >> weight;

    BMI = weight /(height*height);

    if (BMI <= 18.5){
        cout<< "You're skinny with a BMI of " << BMI;
    } else if (BMI >= 18.5 && BMI<= 24.9) {
        cout<< "You have a normal weight with a BMI of " << BMI;
    } else if (BMI >= 25.0 && BMI<= 29.9) {
        cout<< "You're fat with a BMI of " << BMI;
    } else if (BMI >= 30.0 && BMI<= 34.9) {
        cout<< "You are obesity level 1 with a BMI of " << BMI;
    } else if (BMI >= 35.0 && BMI<= 39.9) {
        cout<< "You are obesity level 2 with a BMI of " << BMI;
    } else if (BMI >= 40.0){
        cout<< "You are obesity level 3 with a BMI of " << BMI;
    }

    return 0;
}
