// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len - 1; k++) {
    for (int kk = k + 1; kk < len; kk++) {
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len - 1; k++) {
    for (int kk = len - 1; kk > k; kk--) {
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int cbinsearch(int *arr, int size, int value) {
  int i = 0, j = size - 1, m = 1;
    while (i < j) {
      int middle = i + (j - i) / 2;
        if (arr[middle] == value) {
          int k = middle;
            while (arr[--middle] == value)
              m = m + 1;
            while (arr[++k] == value)
              m = m + 1;
            return m;
      } else if (arr[middle] > value) {
          j = middle;
      } else {
        i = middle + 1;
      }
    }
  return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len; k++) {
    if (arr[k] <= value - arr[k]) {
      counter += cbinsearch(arr, len, k, value - arr[k]);
    }
  }
  return counter;
}
