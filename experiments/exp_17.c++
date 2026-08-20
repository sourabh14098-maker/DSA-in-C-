// // 15	Demonstrate Enqueue and Dequeue using Array (Simple Queue)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int queue[5];
//     int front = 0, rear = -1;

//     queue[++rear] = 10;
//     queue[++rear] = 20;
//     queue[++rear] = 30;

//     int item = queue[front++];

//     cout<<"Deleted Element = "<<item<<endl;

//     cout<<"Remaining Queue: ";

//     for(int i=front; i<=rear; i++)
//     {
//         cout<<queue[i]<<" ";
//     }

//     return 0;
// }