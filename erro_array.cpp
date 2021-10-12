#include <iostream>
using namespace std;
int main(){
    // Đây là lỗi thường gặp khi cấp phát bộ nhớ động
    // Đoạn code ở dưới sẽ làm rò rỉ bộ nhớ khi gán arr = new int[2000]
    // Vì khi vùng nhớ new int[1000] vẫn còn đó, bản chất con trỏ chỉ tró đến 1 vùng nhớ
    // Và khi thay đổi kích thước nó trỏ đến vùng nhớ khác có kích thước lớn hơn
    // Vì vậy khi update thay đổi kích thước của mảng phải xóa vùng nhớ ở mảng cũ
    int* arr = new int[1000];
    delete[]arr;
    arr = new int[2000];
    delete[]arr;
    return 0;
}