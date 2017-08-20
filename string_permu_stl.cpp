#include<bits/stdc++.h>
using namespace std;

void permute(string str){
	sort(str.begin(),str.end());//sort the string in Lexicographically ascending order
	do{
		cout<<str<<endl;
	}while(next_permutation(str.begin(),str.end()));
}

int main()
{
	string str = "ABCD";
	permute(str);
	return 0;
}
