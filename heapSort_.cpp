#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;
const int MAX_ = 1e6;

double *arr = new double[MAX_];

void swap(double *a, double *b) {
  double temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(double *arr, int n, int i) {
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

  if (largest != i) {
    swap(&arr[i], &arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(double *arr, int n) {
  for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr, n, i);

  for (int i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);
  }
}
//________________________________________
bool Check_Sort(double *arr) {
    int n= MAX_;
  int i = 0;
  while (i < n - 1 && arr[i] <= arr[i + 1]) {
    i++;
  }
  return i == n - 1;
}

//__________________________________________
int main() {

//Thuc thi heap sort//////////////////////////////////////////////////////////////
  for (int i = 1; i <= 10; ++i) {
    string filename = "data_" + to_string(i) + ".txt";
    ifstream input_file(filename);

    for (int i = 0; i < MAX_ ; ++i) input_file >> arr[i];


    auto start = high_resolution_clock::now();

    heapSort(arr,MAX_);
    //for (int i=0;i<MAX_;i++) cout<<arr[i]<<' ';

    auto end = high_resolution_clock::now();
    cout<<Check_Sort(arr) << endl;
    auto elapsed_milliseconds = duration_cast<milliseconds>( end - start);

    cout<<"Execution time HeapSort [" << i << "]: " << elapsed_milliseconds.count() << " ms" << endl;
  }
  delete[] arr;
  return 0;
}
