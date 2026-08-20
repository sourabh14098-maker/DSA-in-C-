// #include <iostream>
// using namespace std;

// #define MAX 5

// int stack[MAX], top = -1;

// void push(int x) {
//     if (top == MAX - 1)
//         cout << "Overflow\n";
//     else
//         stack[++top] = x;
// }

// void pop() {
//     if (top == -1)
//         cout << "Underflow\n";
//     else
//         cout << "Popped: " << stack[top--] << endl;
// }

// void peek() {
//     if (top == -1)
//         cout << "Empty\n";
//     else
//         cout << "Top: " << stack[top] << endl;
// }

// void display() {
//     for (int i = top; i >= 0; i--)
//         cout << stack[i] << " ";
//     cout << endl;
// }

// int main() {
//     int x;
//     cout << "Enter value: ";
//     cin >> x;

//     push(x);
//     push(20);
//     push(30);

//     display();
//     peek();
//     pop();
//     display();

//     return 0;
// }

include <iostream>
using namespace std;

int stack[max], top = -1;

void push(int x) {
    if (top == max -1)
        cout <<" ovuerflow\n";
        else
        stack[++top] = x;


}
void pop() {
    if (top == -1)
        cout << "underflow\n";
        else
        cout << "popped: " << stack[top--] <<endl;
}
void peek() {
    if (top == -1)
        cout << "empty\n";
        else 
        cout << "Top: " << stack[to] <<endl;

        
}
void display() {
    for (int i )
}