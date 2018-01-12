#include <bits/stdc++.h>

using namespace std;

int search(list<int> q, int target)
{
	for (std::list<int>::iterator i = q.begin(); i != q.end(); ++i)
	{
		if(*i == target)
			return 1;
	}
	return 0;
}

int main()
{
	int frames;
	cin >> frames;
	list<int> q;
	int n,a;
	cin >> n;	
	for(int i=0 ; i<n ; i++)
	{
		cin >> a;
		if(search(q,a) == 0){
			cout << "page fault\n";
			if(q.size() < frames)
				q.push_back(a);
			else
			{
				cout << q.front() << " was paged out\n";
				q.pop_front();
				q.push_back(a);
			}
		}
	}

}