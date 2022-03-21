#include<functional>
namespace Algorithms {
	
	template<typename T>
	class InsertionSort
	{
		InsertionSort()=delete;
		~InsertionSort()=delete;
	private:
		std::function<bool(T&, T&)>* comparator(std::function<bool(T&, T&)>* pred) {
			if (pred==nullptr)
			{
				static_assert(std::is_integral_v<T>||std::is_floating_point_v<T>,"A numeric type is required");
			}
			return pred;
		}
	public:
		void Sort(T A[],size_t p,size_t q,std::function<bool(T&,T&)> *predicate=nullptr) {

		}
	};

}
