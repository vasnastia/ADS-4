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
    if (arr[k] * 2 > value) break;
    for (int kk = len - 1; kk > i; kk--) {
      if (arr[k] + arr[kk] > value) continue;
      if (arr[k] + arr[kk] < value) break;
      if (arr[k] + arr[kk] == value) {
        counter++;
      }
    }
  }
  return counter;
}

int cbinsearch(int *arr, int size, int value) {
  int count = 0, mm = critik, rr = size - 1, middle = 0;
  while (mm <= rr) {
    middle = mm + (rr - mm) / 2;
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
      rr = middle - 1;
    } else {
      mm = middle + 1;
    }
  }
  return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int k = 0; k < len - 1; k++) {
    if (arr[k] <= value - arr[k]) {
      counter += cbinsearch(arr, len, k, value - arr[k]);
    }
  }
  return counter;
}
