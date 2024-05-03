#include <bits/stdc++.h>
using namespace std;

string x(string s){
	stack<char> st; 
	for(int i=0; i<s.length(); i++){
		if(s[i] != ']') st.push(s[i]);
		else{
			string k="";
			while(st.top() != '['){
			    k = st.top()  +k; 
			    st.pop(); 
			}
			st.pop(); 
         string num="";
			while(!st.empty() && isdigit(st.top())){
				num = st.top() + num;
				st.pop(); 
			} 
			int h = stoi(num);
			while(h--){
				for(int i=0; i<k.length(); i++){
					st.push(k[i]); 
				} 
			} 
		} 
	}
	string result="";
	while(!st.empty()){
		result = st.top() + result; 
		st.pop();
	} 
	return result; 
} 

int main()
{
    string s;
	getline(cin,s); 
	cout << x(s); 

    return 0;
}
