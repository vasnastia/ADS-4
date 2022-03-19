// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len; k++) {
    for (int kk = k+1; kk < len; kk++) {
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int countPairs2(int *arr, int len, int value) {
  int counter = 0;
  while (arr[len-1] > value) {
    len--;
  }
  for (int k = 0; k < len; k++) {
    for (int kk = k + 1; kk > k; kk--) {
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int binsearch(int *arr, int size, int value, int critik) {
  int counter = 0, l = critik, r = size - 1;
  while (l < r) {
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
      r = middle;
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
      counter += binsearch(arr, len, value - arr[i], i);
  }
  return counter;
}
