#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
  int i, j, tmp;
  for (i=0; i < n; i++){
    for (j=0; j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
int main(){
  int array[50], n, i, j;
  cout << "MASUKKAN BANYAK ELEMEN: ";
  cin >> n;
  cout << "MASUKKAN NILAI: \n";
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "HASIL PENGURUTAN ADALAH: \n";
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}
