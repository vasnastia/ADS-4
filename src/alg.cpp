// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int c = 0;
  for (int a = 0; a < len; a++) {
    for (int b = a+1; b < len; b++) {
      if (arr[a] + arr[b] == value) {
        c++;
      }
    }
  }
  return c;
}

int countPairs2(int *arr, int len, int value) {
  int c = 0;
  while (arr[len - 1] > value) {
    len--;
  }
  for (int a = 0; a < len; a++) {
    for (int b = a + 1; b < len; b++) {
      if (arr[a] + arr[b] == value) {
        c++;
        }
      }
    }
  return c;
}

int search(int* arr, int len, int value, int left) {
  int a = left, b = len - 1, c = 0;
  while (a < b) {
    int midd = a + (b - a) / 2;
    if (arr[midd] == value && midd != left) {
      c++;
      int y = midd, yy = midd;
      while (arr[++y] == value) {
        c++;
      }
      while (arr[--yy] == value && yy > left) {
        c++;
      }
      return c;
      } else if (arr[midd] > value) {
          b = midd;
      } else {
          a = midd + 1;
      }
  }
return 0;
}

int countPairs3(int *arr, int len, int value) {
  int c = 0;
  for (int a = 0; a < len; a++) {
    c += search(arr, len, value - arr[a], a);
  }
  return c;
}
