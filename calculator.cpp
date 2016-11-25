#include <iostream>
 using namespace std;
 double sum(float a, float b){
     return a + b;
 }
 double sub(float a, float b){
     return a - b;
}
 double multiply(float a, float b){
     return a*b;
 }
 double div(float a, float b){
    return double(a/b);
 }
 double pow1(float a, int b){
    float new_a = 1;
    int i =1;
    for(i = 1; i <= b; i++){
        new_a = new_a * a;
     }
     return new_a;
 }
 double sqrt1(float a) {
     double n = 1;
     int i = 1;
     for(i;i<a;i++)
     {
         if (pow1(n,2) == a) break;
         else (n = 0.5*(n + a/pow1(n, 2)));
     }
     return n;
 }
 int main() {
     cin >> a >> b;
     cout << sqrt1(a) << endl;
     cout << pow1(a, b) <<endl;
     If ( b!=0 ) cout << div(a, b) << endl;
     Else cout << "b can't be zero" << endl;
     cout << multiply(a, b) << endl;
     cout << sum(a, b) << endl;
     cout << sub(a, b) << endl;
     return 0;
 }
