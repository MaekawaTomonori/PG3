#include <iostream>


template <typename T>
T Calculation(T x, T y) {
    return static_cast<T>(x + y);
}

int NormalWages(int hours) {
    return 1072 * hours;
}

int RecursiveWages(int hours) {
    if(hours == 1){
        return 100;
    }

    return RecursiveWages(hours-1) * 2 - 50;
}

int main() {
	int hours = 1;

    int n = NormalWages(hours);
	int r = RecursiveWages(hours);

    
    while(r < n){

        n = NormalWages(hours);
        r = RecursiveWages(hours);


        std::cout << hours << " : " << n << " / " << r << std::endl;
        ++hours;
    }


	return 0;
}