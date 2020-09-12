void swap(int[] items, int firstIndex, int secondIndex) {
  int temp = items[firstIndex];
  items[firstIndex] = items[secondIndex];
  items[secondIndex] = temp;
}

int[] bubbleSort(int[] items) {

  int len = items.length;

  for (int i = 0; i < len; i++) {
    for (int j = 0, stop = len - i; j < stop - 1; j++) {
      if (items[j] > items[j + 1]) {
        swap(items, j, j + 1);
      }
    }
  }

  return items;
}
