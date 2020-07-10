/*
Given a non-negative number represented as an array of digits,

add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list.
*/


vector<int> Solution::plusOne(vector<int> &A) {
int n=A.size();
vector<int> v;

for(int i=0;i<n;i++){
v.push_back(A[i]);
}
int b=v.size();
for(int i=b-1;i>=0;i--)
{
if(v[i]==9)
{
v[i]=0;
if(i==0)
{
v.insert(v.begin(),1);
break;
}
}
else{
v[i]+=1;
break;
}
}
while(v[0]==0)
{
v.erase(v.begin());
}

return v;

}