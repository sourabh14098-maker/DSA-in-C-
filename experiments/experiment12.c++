// Write a c++ program to sort characters alphabetically.

// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[100], temp;
//     int length = 0;

//     cout << "Enter a string: ";
//     cin >> str;

//     while(str[length] != '\0')
//         length++;

//     for(int i = 0; i < length - 1; i++)
//     {
//         for(int j = i + 1; j < length; j++)
//         {
//             if(str[i] > str[j])
//             {
//                 temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
//     cout << "Sorted string: " << str;

//     return 0;
// }