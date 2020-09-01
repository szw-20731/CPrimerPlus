#include "Customer.h"
#include "queue_.h"
#include <ctime>

using namespace std;
bool newcustomer(double x) {
	return std::rand() * x / RAND_MAX < 1;                     //返回值位于0到x之间， 顾客每x分钟到来一个
}
int main()
{
	int avg_wait;
	int customer_nums;
	cout << "Enter maximum size of queue: " << endl;
	cin >> customer_nums;
	queue_ line(customer_nums);
	Item customer;
	int wait_time = 0;
	int line_wait = 0;
	int nums = 0;
	int res;                                                  //每小时到来多少顾客
	for (res = 1; res < 10000; res++) {                        //到来一个顾客需要60/res分钟 
		for (int i = 0; i < 6000; i++) {                      //模拟6000分钟
			if (newcustomer(60.0 / double(res)) && !line.isfull()) {  //若有新顾客且队列未满
				customer.set(i);            
				line.enqueue(customer);
			}
			if (wait_time <= 0 && !line.isempty()) {
				line.dequeue(customer);
				wait_time = customer.get_processtime();
				line_wait += i - customer.get_arrive();
				nums++;
			}
			if (wait_time > 0)
				wait_time--;
		}
		if (line_wait / nums > 1) {
			cout << res << endl;
			break;
		}
	}
	
	system("pause");
	return 0;
}