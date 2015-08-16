public static class InsertionSort {
  private static int _sortCount;
  private static bool _hasChanged = false;

  public static int SortCount(string[] input) {
    _sortCount = 0;
    for (var i = 1; i < input.Length; i++) {
      _hasChanged = false;
      Insertion(input, i);
      if (_hasChanged) {
        _sortCount += 1;
      }
    }
    return _sortCount;
  }
  public static string[] Insertion(string[] input, int currentPos ) {
    if (String.CompareOrdinal(input[currentPos], input[currentPos - 1]) < 0) {
      _hasChanged = true;
      var tmp = input[currentPos];
      input[currentPos] = input[currentPos - 1];
      input[currentPos - 1] = tmp;
      if(currentPos>1) {
        Insertion(input, currentPos - 1);
      }
    }
    return input;
  }
}
