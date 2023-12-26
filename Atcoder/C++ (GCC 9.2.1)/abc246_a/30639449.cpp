#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);cout.tie(nullptr);cin.tie(nullptr);

	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >>  x2 >> y2 >> x3 >> y3;

	if(x1==x2){
		cout<<x3<<" ";
		if(y1==y2)
			cout<<y3;
		else if(y1 == y3)
			cout<<y2;
		else cout<<y1;
	}

	else if(x1==x3){
		cout<<x2<<" ";
		if(y1==y2)
			cout<<y3;
		else if(y1 == y3)
			cout<<y2;
		else cout<<y1;
	}

	else {
		cout<<x1<<" ";
		if(y1==y2)
			cout<<y3;
		else if(y1 == y3)
			cout<<y2;
		else cout<<y1;
	}
	return 0;
}