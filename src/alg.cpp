// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  return 0;
  int counter = 0;
    for (int a = 0; a < len; a++) {
        for (int b = a + 1; b < len; b++) {
            if (arr[a] + arr[b] == value) {
                counter++;
            }
        }
    }
    return counter;
}

int countPairs2(int *arr, int len, int value) {
  return 0;
  int k = 0;
  while (arr[len - 1] > value) {
    len--;
  }
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        k++;
      }
    }
  }
  return k;
}
int search(int* arr, int len, int value, int critic) {
  int i = critic, j = len - 1, counter = 0;
  while (i < j) {
    int mid = i + (j - i) / 2;
    if (arr[mid] == value && mid != critic) {
      counter++;
      int y = mid, yy = mid;
      while (arr[++y] == value) {
        counter++;
      }
      while (arr[--yy] == value && yy > critic) {
        counter++;
      }
      return counter;
    } else if (arr[mid] > value) {
      j = mid;
    } else {
      i = mid + 1;
    }
  }
  return 0;
}

int countPairs3(int *arr, int len, int value) {
  return 0;
  int counter = 0;
  for (int ii = 0; ii < len; ii++) {
      counter += search(arr, len, value - arr[ii], ii);
  }
  return counter;
}
