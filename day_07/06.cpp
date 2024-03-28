#include <iostream>
#include <iomanip> // 用于控制输出格式
using namespace std;

void convertToInternationalFormat(const string& us_date) {
    istringstream iss(us_date);
    string month_str, day, year;
    iss >> month_str >> day >> year;

    // setw 长度为2，setfill
    cout<<"国际格式日期: " << setw(2) << setfill('0') << day << " " << month_str << " " << year;

}

int main() {
    string us_date = "May 4 2024";

    convertToInternationalFormat(us_date);


    return 0;
}
