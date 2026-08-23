#include <iostream>

// [begin, end) is half-open: begin is the first element, end is one
// past the last. Do not dereference end.
//
// In find and reverse: no operator[], no integer indexes.
// Allowed: *, &, ++, --, +, -, ==, !=, <, >

int* find(int* begin, int* end, int value) {
	// find the first element in an array, must return a pointer to the element 
	
	int* p = begin; 

	while (p < end) { 
		if (*p == value) { 
			return p; 		
		}
		++p;
	}

	return end;
}

void reverse(int* begin, int* end) {
	// {0, 1, 2}
	// two pointer solution 
	// take two ends, swap until they meet at center
	
	int* lp = begin; 
	int* rp = end-1; 	
	
	while (lp < rp) { 	
		int temp = *lp; 
		*lp = *rp; 
		*rp = temp; 

		++lp; 
		--rp; 
	}
}

void swap_twos(int* begin, int* end) { 
	// swap every two ints together, then continue 
	// {0, 1, 0, 3, 12} -> {1, 0, 3, 0, 12}

	int* p = begin+1; 
	int temp; 

	while (p < end) { 
		temp = *p; //i previous value 
		*p = *(p-1); 
		*(p-1) = temp; 

		p += 2; 
	}
} 


int main() {
	int a[] = {0, 1, 0, 3, 12};
	int* b = a;
	int* e = a + 5;

	reverse(b, e);
	for (int* p = b; p != e; ++p)
		std::cout << *p << ' ';
	std::cout << '\n';
	// expect: 12 3 0 1 0

	int* p = find(b, e, 3);
	std::cout << (p == e ? -1 : p - b) << '\n';
	// expect: 1

	std::cout << (find(b, e, 7) == e) << '\n';
	// expect: 1

	swap_twos(b, e); 
	for (int* p = b; p != e; ++p) {
		std::cout << *p << ' '; 
	}
	std::cout << '\n'; 
	
	return 0;
}
