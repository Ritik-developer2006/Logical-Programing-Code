using namespace std;
#include <iostream>

int main() {
    int num,num2;
    bool isPrime;

    for(num = 2; num <= 100; num++){
        isPrime = true;

        // Check divisibility
        for(num2 = 2; num2 <= num; num2++){
            if(num % num2 == 0){
                isPrime = false;
                break;
            }
        }
        
        if(isPrime){
            std::cout << num << " ";
        }
    }
    return 0;
}
