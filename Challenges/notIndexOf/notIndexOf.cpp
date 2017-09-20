bool check(int x, string a, string b)
{
    for(int i = x, j=0; i <= x+b.size(); i++, j++)
        if(a[i] == b[j]) return false;
    return true;
}
int notIndexOf(string a, string b) {
    if(a.size() < b.size()) return -1;
    for(int i = 0; i <= (a.size()-b.size()); i++)
        if(check(i, a, b)) return i;
    return -1;
}
