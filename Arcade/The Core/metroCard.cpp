std::vector<int> metroCard(int lastNumberOfDays) {
std::vector<int> day;
    if(lastNumberOfDays == 28 || lastNumberOfDays == 30){
        day={31};
        return day;
    }else{
        day={28,30,31};
        return day;
    }
}
