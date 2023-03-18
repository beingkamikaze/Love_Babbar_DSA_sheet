string reverseWord(string str){
    
  stack<char> st;
  int n= str.length();
  for(int i=0;i<n;i++)
  {
      st.push(str[i]);
  }
  string ans="";
  while(!st.empty())
  {
      ans+=st.top();
      st.pop();
  }
  return ans;
}
