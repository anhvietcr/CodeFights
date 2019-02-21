bool bishopAndPawn(std::string a, std::string c) {
//  int t = abs(c[0] - a[0]);
//  int d = abs(c[1] - a[1]);
//  if(d==t) return true;
//  return false;
    return (abs(c[0] - a[0]) == abs(c[1] - a[1]));
}
