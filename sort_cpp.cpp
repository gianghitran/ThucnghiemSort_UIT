#include <bits/stdc++.h>

#include <chrono>
using namespace std;
using namespace std::chrono;
const int MAX_ = 1e6;

//double *a = new double[MAX_];
//____________________
bool Check_Sort(vector<double> arr) {
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

    vector<double> arr(MAX_);
    for (int i = 0; i < MAX_ ; ++i) input_file >> arr[i];


    auto start = high_resolution_clock::now();


    sort(arr.begin(), arr.end());
    // for (int i=0;i<MAX_;i++) cout<<a[i]<<' ';
    auto end = high_resolution_clock::now();
    cout<<Check_Sort(arr)<<endl;
    auto elapsed_milliseconds = duration_cast<milliseconds>( end - start);

    cout << "Execution time C++ Sort [" << i << "]: " << elapsed_milliseconds.count() << " ms" << endl;
  }

    // delete[] a;
    return 0;
}
