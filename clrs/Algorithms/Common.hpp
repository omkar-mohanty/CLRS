#include<concepts>
namespace Algorithms {
	template<typename T>
	requires std::integral<T>||std::floating_point<T>
	constexpr bool compare(T & a, T & b) {
		return a < b;
	}

}