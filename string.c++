// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){

//     char str1[20],str2[20];
//     cout<<"Enter the first string: ";
//     cin.getline(str1,20);
//     cout<<"Enter the second string: ";
//     cin.getline(str2,20);
//     if(strcmp(str1,str2)==0){
//         cout<<"The strings are equal."<<endl;
//     }
//     else{
//         cout<<"The strings are not equal."<<endl;
//     }
//     return 0;
   
// }



#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[100];
    int length = 0;

    cout << "enter a string:";
    cin >> str;

    while(str[length] != '\0') {
        length++;
    }

    cout << "length of string=" << length;
}1`