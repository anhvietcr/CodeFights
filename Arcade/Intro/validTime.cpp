bool validTime(std::string time) {
    if(time.size() != 5) return false;
    if(time[2] != ':') return false;
    int a = time[0] - '0';    
    int b = time[1] - '0';
    int c = time[3] - '0';
    int d = time[4] - '0'; 
    return(
        (0 <= a && a <= 2) && 
        ((0 <= b && b <= 9 && a == 0) || (0 <= b && b <= 3 && a != 0)) && 
        (0 <= c && c <= 5) && (0 <= d && d <= 9)
    );
    //23 : 59
    //09 : 59
}
