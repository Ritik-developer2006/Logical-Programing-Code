using namespace std;
#include <iostream>
#include <string>

int main() {
    std::string arr = "ffggyyttdddrrr";
    int size = arr.length();
    
    // Loop to compress
    for (int i = 0; i < size; i++) {
        int count = 1;
        // Count consecutive duplicates
        while (i + 1 < size && arr[i] == arr[i + 1]) {
            count++;
            i++;
        }
        // Print character and count
        std::cout << arr[i] << count;
    }
    
    return 0;
}
