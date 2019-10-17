#include <iostream>
#include <set>
using namespace std;
int main() {
	 int n;
	 cin>>n;
	 set<int> poziomy;
	  int q,y;
	  cin>>q;
	  for(int i=0;i<q;i++){
		  int x;
		  cin>>x;
		  poziomy.insert(x);
	  }
	  cin>>y;
	  for(int i=0;i<y;i++){
		  int w;
		  cin>>w;
		  poziomy.insert(w);
	  }
	  if(poziomy.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";
	return 0;
}