#include <iostream>
#include <list>

int main() {
	int n;
	std::cin >> n;
	std::list<int> list;
	for (int i = 0; i < n; ++i) {
		int v;
		std::cin >> v;
		list.push_back(v);
	}

	list.reverse();

	/*for (auto it = list.begin(); it != list.end(); ++it) {
		std::cout << *it << ' ';
	}*/

	for (int a : list) {
		std::cout << a << " ";
	}

}