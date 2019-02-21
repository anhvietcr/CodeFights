std::string lineEncoding(std::string s) {
    int d = 1;
    std::string r;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]) ++d;
        else{
            if(d > 1){ //neu so luong tu > 1
                r += to_string(d); //cong them so vao dau
                r += s[i];
            }else{
                r += s[i]; //nguoc lai thi chi cong chu
            }
            d = 1; //reset lai dem
        }
    }
    return r;
}
