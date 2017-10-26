//https://codefights.com/interview-practice/task/FwAR7koSB3uYYsqDp/solutions
std::string findProfession(int level, int pos) {
    if(level == 1) return "Engineer";
    if(findProfession(level-1, (pos+1)/2) == "Doctor")
    {
        return (pos%2) ? "Doctor" : "Engineer";
    }
    return (pos%2) ? "Engineer" : "Doctor";
}
