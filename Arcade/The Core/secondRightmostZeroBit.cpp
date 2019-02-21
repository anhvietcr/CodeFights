int secondRightmostZeroBit(int n) {
  return -(n-((((n+1)|n)+1)|n));
}
