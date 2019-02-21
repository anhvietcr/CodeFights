bool isBeautifulString(std::string in) {
    std::sort(in.begin(), in.end()); //sap xep
    std::vector<int> r;
    int d = 0, k = 0;
    char j = 'a' + k; //ban dau duyet tu 'a' + 0 = 'a'
    for(int i = 0; i < in.size(); i++){ //duyet tat ca char trong string
        if(in[i] == j){ 
            ++d;
        }else{
            ++k;
            j = 'a' + k; //tang len 'b' , 'c' ,...
            r.push_back(d); //dua so luong vua dem vao mang
            d = 1; //reset
        }
    }
    r.push_back(d); //dua thanh vien cuoi vao mang
    d = 0;
   for(int i = 0; i < r.size(); i++){
       if(r[i] < r[i+1]) ++d;
       if(d > 0) return false;
   }
    return true;
}
