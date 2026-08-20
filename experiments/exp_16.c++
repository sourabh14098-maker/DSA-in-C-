// 14	Demonstrate Push and Pop using Array (No Overflow Handling)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int stack[5];
//     int top=-1;

//     stack[++top]=10;
//     stack[++top]=20;

//     int item=stack[top--];

//     cout<<"Popped="<<item;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int stack[5];
//     int top =-1;

//     stack[++top]=10;
//     stack[++top]=20;

//     int item=stack[top--];

//     cout<<"popped="<<item;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int stack[5];
//     int top = -1;

//     // Push Operation
//     stack[++top] = 10;
//     stack[++top] = 20;
//     stack[++top] = 30;

//     // Pop Operation
//     int item = stack[top--];

//     cout<<"Popped Element = "<<item<<endl;

//     cout<<"Remaining Stack: ";

//     for(int i=0; i<=top; i++)
//     {
//         cout<<stack[i]<<" ";
//     }

//     return 0;
// }