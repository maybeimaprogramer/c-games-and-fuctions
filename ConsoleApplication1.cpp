// Example program
#include <iostream>
#include <string>
using namespace std;
/*int main() {
    int numrandom, count = 0, num, score = 0;
    srand(time(0));
    numrandom = rand() % 13;
    while (count < 3) {
        cout << "\nGenerated number is: " << numrandom << endl;
        cout << "please input your number: ";
        cin >> num;
        if (num == numrandom) {
            score = score + 10;
        }
        else { count++; }
    }   cout << "\nYour score is: " << score;
    }*/
// no recicive no return
/*void greeting() {
    cout<<"hello thier";

*/
//recive but no return
/*void nam(string name);
int main(){
    string name;
    cin >> name;
    nam(name);

}
void nam(string name) {
    cout << "your name is: " << name;
}*/
// no recieve but return
/*string name1() {
    string name;
    cin >> name;
    return name;

}
int main() {
    cout << "your name is " << name1();

}*/
//recieve and return
int summing(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
}
int main() {
    int num1, num2;
    cout << "enter yur first number: ";
    cin >> num1;
    cout << "eneter your second number: ";
    cin >> num2;
    cout << "the summ of your values are: " << summing(num1, num2);

}