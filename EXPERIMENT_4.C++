// #include <iostream>
// using namespace std;

// int main() {
//     int n1, n2;
//     cout << "Enter number of elements in first array: ";
//     cin >> n1;
//     cout << "Enter number of elements in second array: ";
//     cin >> n2;

//     if (n1 <= 0 || n2 <= 0) {
//         cout << "Invalid number of elements" << endl;
//         return 1;
//     }

//     int arr1[100], arr2[100], merged[200];

//     cout << "Enter " << n1 << " elements for first array: ";
//     for (int i = 0; i < n1; i++) {
//         cin >> arr1[i];
//     }

//     cout << "Enter " << n2 << " elements for second array: ";
//     for (int i = 0; i < n2; i++) {
//         cin >> arr2[i];
//     }

//     // Merge arrays
//     for (int i = 0; i < n1; i++) {
//         merged[i] = arr1[i];
//     }
//     for (int i = 0; i < n2; i++) {
//         merged[n1 + i] = arr2[i];
//     }

//     cout << "Merged array: ";
//     for (int i = 0; i < n1 + n2; i++) {
//         cout << merged[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }