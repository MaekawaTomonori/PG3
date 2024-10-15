#include <functional>
#include <iostream>
#include <thread>
#include <threads.h>

typedef void (*pFunc) ();

void Correct() {
	std::cout << "正解！" << std::endl;
}

void Incorrect() {
    std::cout << "不正解！" << std::endl;
}

void RunTaskLater(pFunc task, int delay) {
    std::thread([task, delay]{
        std::this_thread::sleep_for(std::chrono::seconds(delay));
        task();
    }).detach();
}


int main() {
    pFunc task;
	char buffer;
    auto func = [&](int dice){
    	if (buffer == 'o' && dice % 2 != 0 || buffer == 'e' && dice % 2 == 0){
	        task = Correct;
	    } else{
	        task = Incorrect;
	    }
    };

    srand(time(nullptr));

    std::cout << "サイコロの出目は奇数か偶数か : Odd/Even[o/e]";

    std::cin >> buffer;

    int dice = rand() % 6 + 1;

    func(dice);

    RunTaskLater(task, 3);
    std::this_thread::sleep_for(std::chrono::seconds(5));

	return 0;
}