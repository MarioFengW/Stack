#include <iostream>

#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main() {

    Stack stack(3);

    stack.push(30);

    stack.push(50);

    stack.push(70);

    stack.push(90);


    cout << "EL elemento top: " << stack.top() << endl;

    stack.pop();
    
    cout << "El elemento despues del pop: " << stack.top() << endl;

    stack.pop();

    stack.pop();

    stack.pop();

    return 0;
}