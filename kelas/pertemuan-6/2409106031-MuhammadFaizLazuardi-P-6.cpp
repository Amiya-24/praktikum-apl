#include <iostream>
using namespace std;


// //                                      BUBBLE SORT
// int arr[4] = {44, 27, 21, 1};
// int n = sizeof(arr)/sizeof(arr[0]);

// void bubbleSort () {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < (n-i-1); j++) {
//             if(arr[j] > arr[j+1]) {
//                 // Menukar elemen jika elemen sebelumnya lebih besar
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//         // Menampilkan proses sorting pada setiap iterasi
//         cout << endl << endl;
//         cout << "Proses [" << i + 1 << "] :";
//         for (int k = 0; k < n; k++) {
//             cout << " " << arr[k];
//         }
//     }
// }

// int main() {
//     // Menampilkan data sebelum dilakukan sorting
//     cout << "Data sebelum diurutkan: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i]<< " ";
//     }
//     bubbleSort();
//     // Menampilkan data setelah dilakukan sorting
//     cout << endl << "Data sesudah diurutkan: " << endl;
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " " ;
//     }
//     return 0;
// }


// //                                        INSERTION SORT
// void insertionSort(int a[], int panjang) {
//     for (int i = 1; i < panjang; i++) {
//         int key = a[i];
//         int j = i - 1;
//         while (j >= 0 && a[j] > key) {
//             a[j + 1] = a[j];
//             j = j - 1;
//         }
//         a[j + 1] = key;
//         cout << "Tahap ke-" << i << ": ";
//         for (int k = 0; k < panjang; k++) {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int arr[6] = {7, 5, 10, 8, 32, 24};
//     int panjang = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, panjang);
//     return 0;
// }


// //                                              MERGE SORT
// int arr[] = {38, 27, 43, 3, 9, 82, 10, 55};
// int n = sizeof(arr) / sizeof(arr[0]);

// void merge(int arr[], int l, int m, int r) {
//     int temp[8];
//     int i = l;
//     int j = m + 1;
//     int k = 0;

//     while (i <= m && j <= r) {
//         if (arr[i] < arr[j]) {
//             temp[k] = arr[i];
//             i++;

//         } else {
//             temp[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     while (i <= m) {
//         temp[k] = arr[i];
//         i++;
//         k++;
//     }

//     while (j <= r) {
//         temp[k] = arr[j];
//         j++;
//         k++;
//     }

//     for (int x = 0; x < k; x++) {
//         arr[l + x] = temp[x];
//     }
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = (l + r) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int main() {
//     cout << "Sebelum sorting: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     mergeSort(arr, 0, n - 1);
//     cout << "Sesudah sorting: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// //                                              QUICK SORT
// int arr[] = {3, 4, 2, 9, 8, 6, 5, 7};
// int n = sizeof(arr) / sizeof(arr[0]);
// void quickSort(int arr[], int low, int high) {
//     if (low >= high) return;
//         // menentukan data tengah sebagai pivot
//         int mid = low + (high - low) / 2;
//         int pivot = arr[mid];
//         int i = low, j = high;
//     while (i <= j) {
//         while (arr[i] < pivot) {       
//         i++;
//         }
//         while (arr[j] > pivot) {
//             j--;
//         }
//         if (i <= j) { // Tukar elemen jika berada di posisi yang salah
//             swap(arr[i], arr[j]);
//             i++;
//             j--;
//         }
//     }
//     // Rekursi untuk bagian kiri dan kanan array
//     if (low < j) {
//         quickSort(arr, low, j);
//     }
//     if (i < high) {
//     quickSort(arr, i, high);
//     }
// }

// int main() {
//     cout << "Data Belum Terurut: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     quickSort(arr, 0, n - 1);
//     cout << endl << "Hasil Quick Sort: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// //                                                  SELECTION SORT
// void selectionSort(int a[], int panjang) {
//     for (int i = 0; i < panjang - 1; i++) {
//         int min = i;
//         for (int j = i + 1; j < panjang; j++) {
//             if (a[j] < a[min]) {
//                 min = j;
//             }
//         }
//         int temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//         cout << "Tahap ke-" << i + 1 << ": ";
//         for (int k = 0; k < panjang; k++) {
//             cout << a[k] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int arr[6] = {8, 45, 6, 12, 81, 32};
//     int panjang = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, panjang);
//     return 0;
// }