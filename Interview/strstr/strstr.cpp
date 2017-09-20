int strstr(std::string s, std::string x) {
    int min = -1;
	for(int i = s.length()-1; i >= 0; i--){
		if(x[x.length()-1] == s[i]){
			bool flag = false;
			for(int j = x.length()-1; j >= 0; j--){
				if(x[j] != s[i]) { flag = true; break;}
				else { i--; }
			}
			if(!flag && (min > i+1 || min == -1)) min = i+1;
		}
	}
    return min;
}