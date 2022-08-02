template<typename T> 
static int binSearch(T* A, T const & e, int lo, int hi) {
  while (lo < hi) {
    int mi = (lo + hi) >> 1
    (e < mi) ? hi = mi : lo = mi + 1;
  }
  return lo - 1;
}