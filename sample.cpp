#include <iostream>
#include <memory>
using namespace std;

int main()
{
	shared_ptr<int>p1(new int);
	cout<<p1.use_count()<<endl;

	shared_ptr<int>p2(p1);
	cout<<p2.use_count()<<endl;
	return 0;
}
