#include <iostream>
#include <chrono>

// ���������� ���� �׽�Ʈ
int main()
{
	size_t nRepeat = 900'000'000;

	auto start = std::chrono::system_clock::now();
	size_t sum = 0;
	for (size_t idx = 0; idx < nRepeat; ++idx)
	{
		int a = 10;
		sum += a;
		int b = 10;
		sum += b;
		int c = 10;
		sum += c;
		int d = 10;
		sum += d;
		int a2 = 10;
		sum += a2;
		int b2 = 10;
		sum += b2;
		int c2 = 10;
		sum += c2;
		int d2 = 10;
		sum += d2;
	}
	auto dur = std::chrono::system_clock::now() - start;
	std::cout << "�� �ɸ� �ð� : " << dur.count() << std::endl;
	std::cout << "�հ� : " << sum << std::endl;

	start = std::chrono::system_clock::now();
	for (size_t idx = 0; idx < nRepeat; ++idx)
	{
		int a = 10;
		int b = 10;
		int c = 10;
		int d = 10;
		int a2 = 10;
		int b2 = 10;
		int c2 = 10;
		int d2 = 10;
		sum += a + b + c + d + a2 + b2 + c2 + d2;
	}
	dur = std::chrono::system_clock::now() - start;
	std::cout << "�� �ɸ� �ð� : " << dur.count() << std::endl;
	std::cout << "�հ� : " << sum << std::endl;

	return 0;
}