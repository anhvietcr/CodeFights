//so sanh tat cac phan tu voi phan tu thu i + k
int electionsWinners(std::vector<int> votes, int k) {
    int d = 0, c = 0;
    int flag = 0;
    int max = *max_element(votes.begin(), votes.end());
    for(int i = 0; i < votes.size(); i++){
        for(int j = 0; j < votes.size(); j++){
            if(votes[i] + k > max) { flag = 1; break;}
        }
        if(votes[i] == max && k == 0) { ++c;} //1 max
        if(flag){ ++d; flag = 0; } //nhieu max
    }
    if(c == 1) return 1;
    return d;
}