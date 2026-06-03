
// class node{
//     public:
//     int data;
//     node *next;
//     node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main (){
//     node *head;
//     head = new node(4);
//     cout<<head->data<<endl;
//     cout<<head->next<<endl;

//     return 0;

// }


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node();
//     head->data = 20;
//     head->next = NULL;

//     Node* newNode = new Node();
//     newNode->data = 10;

//     newNode->next = head;
//     head = newNode;

//     Node* temp = head;

//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }


// inseration at end !
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// int main() {
//     Node* head = new Node();
//     head->data = 10;
//     head->next = NULL;

//     Node* newNode = new Node();
//     newNode->data = 20;
//     newNode->next = NULL;

//     head->next = newNode;

//     Node* temp = head;

//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }

// stack push and pop elment method 

// #include <iostream>
// using namespace std;

// int stack[5];
// int top = -1;

// int main() {

//     top++;
//     stack[top] = 10;

//     top++;
//     stack[top] = 20;

//     cout << "Popped Element = " << stack[top] << endl;
//     top--;

//     return 0;
// }


// Queue (Enqueue and Deque)

// #include <iostream>
// using namespace std;

// int queue[5];
// int front = -1, rear = -1;

// int main() {

//     front = 0;

//     rear++;
//     queue[rear] = 10;

//     rear++;
//     queue[rear] = 20;

//     cout << "Deleted Element = " << queue[front];
//     front++;

//     return 0;
// }
