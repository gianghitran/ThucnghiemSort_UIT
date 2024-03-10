#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;
const int MAX_ = 1e6;

double *arr = new double[MAX_];

void QuickSort(int l, int r)
{
    int i = l, j = r;
    double x = arr[(l+r)/2];
    do
    {
        while (arr[i]<x) i++;
        while (arr[j]>x) j--;
        if (i<=j)
        {
            double tam = arr[i]; arr[i] = arr[j]; arr[j] = tam;
            i++; j--;
        }
    } while (i<=j);
    if (l<j) QuickSort(l,j);
    if (i<r) QuickSort(i,r);
}

//----------------------
bool Check_Sort(double *arr) {
    int n= MAX_;
  int i = 0;
  while (i < n - 1 && arr[i] <= arr[i + 1]) {
    i++;
  }
  return i == n - 1;
}




int main()
{


    for (int i = 1; i <= 10; ++i) {
    string filename = "data_" + to_string(i) + ".txt";
    ifstream input_file(filename);

    for (int i = 0; i < MAX_ ; ++i) input_file >> arr[i];


    auto start = high_resolution_clock::now();
    QuickSort(0, MAX_-1);
    auto end = high_resolution_clock::now();
    cout<<Check_Sort(arr) << endl;
    auto elapsed_milliseconds = duration_cast<milliseconds>( end - start);

    cout<<"Execution time QuickSort [" << i << "]: " << elapsed_milliseconds.count() << " ms" << endl;
  }

    delete[] arr;
    return 0;
}
