#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	while (0 < (n--)) {
		string s;
		cin >> s;

		const auto ss = s.substr(2);
		auto iss = istringstream{ ss };
		int d;
		iss >> d;

		if (d <= 90) {
			++ans;
		}
	}

	cout << ans;

	return 0;
}