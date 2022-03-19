// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len-1; k++) {
    for (int kk = k+1; kk < len; kk++) {
      if (arr[i] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int countPairs2(int *arr, int len, int value) {
  int counter = 0;
  for (int k = 0; k < len-1; k++) {
    for (int kk = len-1; kk > k; kk--) {
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int cbinsearch(int *arr, int size, int critik, int value) {
  int counter = 0;
  int l = critik;
  int r = size - 1;
  int middle = 0;
  while (l <= r) {
    middle = l + (r - l) / 2;
    if (arr[middle] == value && middle != critik) {
      counter++;
      int mm1 = middle, mm2 = middle;
      while (arr[--mm1] == value && mm1 > critik) {
        counter++;
      }
      while (arr[++mm2] == value) {
        counter++;
      }
      return counter;
    } else if (arr[middle] > value) {
      r = middle - 1;
    } else {
      l = middle + 1;
    }
  }
  return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] <= value - arr[i]) {
      counter += cbinsearch(arr, len, i, value - arr[i]);
    }
  }
  return count;
}
