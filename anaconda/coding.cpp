#include<bits/stdc++.h>
using namespace std;
std::vector<string> v;
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void permute(string str,int l,int r)
{
	if(l==r)
	{
		v.push_back(str);
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(str.at(l),str.at(i));
			permute(str,l+1,r);
			swap(str.at(l),str.at(i));
		}
	}
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    v.clear();
	    int n=str.length();
	    permute(str,0,n-1);
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++)
	    {
	    	cout<<v[i]<<" ";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
