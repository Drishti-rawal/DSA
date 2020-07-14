/*
Given a list of non negative integers, arrange them such that they form the largest number.

For example:

Given [3, 30, 34, 5, 9], the largest formed number is 9534330
*/  

  bool compare(string x,string y)
    {
        string xy = x.append(y);
        string yx= y.append(x);
        if(xy>yx)
            return 1;
        else 
            return 0;
    }

string Solution::largestNumber(const vector<int> &A) {
    vector<string> temp;
    for(int i=0;i<A.size();i++)
        temp.push_back(to_string(A[i]));
    sort(temp.begin(),temp.end(),compare);
    string result="";
    for(int i=0;i<temp.size();i++)
        result=result.append(temp[i]);
    
    int pos = 0;
            while (result[pos] == '0' && pos + 1 < result.size()) pos++; 
            return result.substr(pos);
    
    return result;
    
}
