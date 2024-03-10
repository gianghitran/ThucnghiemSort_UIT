#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
const int MAX_ = 1e6;
double *arr = new double [MAX_];

void merge(int l, int m, int r)
{
    int i, j, k;
    double *left = new double[m - l + 1]; double *right = new double[r - m];
    for (i = 0; i < m - l + 1; i++) left[i] = arr[l + i];
    for (j = 0; j < r - m; j++) right[j] = arr[m + 1 + j];
    i = 0; j = 0; k = l;
    while (i < m - l + 1 && j < r - m)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i]; i++;
        } else
        {
            arr[k] = right[j]; j++;
        }
        k++;
    }
    while (i < m - l + 1)
    {
        arr[k] = left[i]; i++; k++;
    }
    while (j < r - m)
    {
        arr[k] = right[j]; j++; k++;
    }
}
void mergeSort(int l, int r)
{
    if (l < r) {
    int m = l + (r - l)/2;
    mergeSort(l, m);
    mergeSort(m + 1, r);
    merge(l, m, r);
  }
}
//____________________
bool Check_Sort(double *arr) {
    int n= MAX_;
  int i = 0;
  while (i < n - 1 && arr[i] <= arr[i + 1]) {
    i++;
  }
  return i == n - 1;
}



//_________________________________________________________________________________

int main() {

//Thuc thi mergeSort//////////////////////////////////////////////////////////////
  for (int i = 1; i <= 10; ++i) {
    string filename = "data_" + to_string(i) + ".txt";
    ifstream input_file(filename);

    for (int i = 0; i < MAX_ ; ++i) input_file >> arr[i];
    auto start = high_resolution_clock::now();
    mergeSort(0, MAX_ - 1);
    //for (int j = 0; j < MAX_ ; ++j) cout<< arr[j]<<" ";

    auto end = high_resolution_clock::now();
    cout<<Check_Sort(arr)<<endl;
    auto elapsed_milliseconds = duration_cast<milliseconds>( end - start);
    cout << "Execution time MergeSort [" << i << "]: " << elapsed_milliseconds.count() << " ms" << endl;
  }
  delete[] arr;
  return 0;
}
