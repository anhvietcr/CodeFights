string _, a[13] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin", "tu", "lam"," khong tram "}, r(int R, int& L, int n, string i)
{
    int y = n/10%10, z = n%10; _ ="";
    if(n)
    {
        R<L ?_+=n<=99 ?a[12] + (y ?"" :"le ") :" " :"",L=R;          
        _+= (n>99 ?a[n/100] +" tram"+ (y ?" ": z ?" le " :"") :"") 
            + (y ?(y>1 ?a[y]+" " :"") +"muoi"+ (z ?" " :"") :"") 
            + a[z+= z==4&&y>1||z==5&&y ?6 :0] + i;
    }
    return _;
}
string s, b[6] = {"", "", " ngan", " trieu", " ty", " ngan ty"}, Number2Word(string m)
{
    long n, x = 1000, i = pow(x, 4);
    stringstream ss(m); ss >> n;
    for(int j = 5, L = 0; j; j--, i /=x) 
        s += r(j, L, n/i%x, b[j]);
    return n<10 ? n ? a[n] : "khong" : s;
}