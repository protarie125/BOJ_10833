#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	auto ans = int{ 0 };
	while (0 < (n--)) {
		auto a = int{};
		auto b = int{};
		cin >> a >> b;

		ans += b % a;
	}

	cout << ans;

	return 0;
}