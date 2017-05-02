// Copyright 2017 - Damir Mustafin
#include <vector>
#include <iostream>

using namespace std;

int main() {
  int arr[6][6];
  int max;
  bool assigned = false;
  for (int arr_i = 0; arr_i < 6; arr_i++) {
    for (int arr_j = 0; arr_j < 6; arr_j++) {
      scanf("%d", &arr[arr_i][arr_j]);
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if ((i + 2 < 6) && (j + 2 < 6)) {
        int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] +
         arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

        if (assigned) {
          if (sum > max) {
            max = sum;
          }
        } else {
          max = sum;
          assigned = true;
        }
      }
    }
  }

  cout << max << endl;
  return 0;
}
