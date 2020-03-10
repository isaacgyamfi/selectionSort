#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minNum = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minNum]) {
        minNum = j;
      }
    }
    if (minNum != i) {
    // swapping
      int hold = arr[minNum];
      arr[minNum] = arr[i];
      arr[i] = hold;
    }
  }
}

int main() {
  int n;
  cout<<"Enter the total number of integers to be sorted: ";
  cin>>n;
  int myarr[n];
  cout << "Enter the "<<n<<" numbers in random" << endl;
  for (int x = 0; x < n; x++) {
    cin >> myarr[x];
  }

  cout << "Array unsorted: ";
  for (int x = 0; x < n; x++) {
    cout << myarr[x] << "  ";
  }
  cout << endl;
  selection_sort(myarr, n);

  cout << "Array after sorting: ";
  for (int y = 0; y < n; y++) {
    cout << myarr[y] << "  ";
  }
  return 0;
}
