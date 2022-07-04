# string 클래스 맴버 함수
https://blockdmask.tistory.com/338
## 생성자
~~~c++
#include <string>
using namespace std

int main() {
    string str1 = "string creator 1";
    string str2 ("string creator 2");
    string str3 (str2);
}
~~~
* * *

## at
~~~c++
/*
 - char& str.at(size_t index)
 해당 문자열의 Index에 접근한다. 
 범위를 벗어나게 되면 예외를 발생 시킵니다.  (try ~ catch)
*/
string str1 = "str";
str1.at(0); // s
str1.at(1); // t
str1.at(2); // r
~~~
* * *

## []
~~~c++
/*
 str[index]
 해당 문자열의 Index에 접근한다. 
 위에 at 맴버 함수 보다 접근이 빠르다. 단 예외를 발생 시키지는 않습니다.
*/
string str1 = "str";
str1[0]; // s
str1[1]; // t
str1[2]; // r
~~~
* * *

## front() / back()
~~~c++
/*
 - char& str.front()
 - char& str.back()
 c++ 11부터 사용이 가능하다.
 해당 문자열의 맨앞/뒤의 문자를 반환 한다. 
*/
string str1 = "str";
str1.front(); // s
str1.back();  // r
~~~
* * *
 
## size() / length() / capacity()
~~~c++
/*
 - size_t str.size() 
 - size_t str.length() 
 - size_t str.capacity()
 문자열 길이(size, length)와 용량(capacity)을 반환 한다.
 capacity의 경우 2의 n제곱 만큼 증가 한다.
*/
string str1 = "str";
str1.size();     // 3
str1.length();   // 3
str1.capacity(); // 4

string str2 = "str12";
str2.capacity(); // 8

string str3 = "str1234567";
str3.capacity(); // 16
~~~
* * *

## resize()
~~~c++
/*
 - void str.resize(size_t n)
 - void str.resize(size_t n, char c) 
 string의 길이를 n 만큼 크기로 할당한다. 
 만약 기존 길이가 n 보다 크다면 n길이 만큼만 남고 나머지는 잘린다. 
 만약 기존 길이가 n 보다 작다면 n길이 만큼 할당하고 빈 문자열은 c로 할당 한다.
*/
string str1 = "str";
str1.resize(2);     // "st"

string str2 = "str";
str2.resize(5);    // "str  "

string str3 = "str";
str3.resize(5, a)   // "staaa"
~~~
* * *

## shrink_to_fit()
~~~c++
/*
 - void str.shrink_to_fit()
 c++ 11부터 사용이 가능하다. 
 resize 후 낭비되는 capacity를 반환하는 함수 이다.
*/
string str1 = "0123456789";
str1.capacity();        // 10
str1.resize(3);         // "123"
str1.capacity();        // 10
str1.shrink_to_fit();
str1.capacity();        // 4
~~~
* * *

## reserve()
~~~c++
/*
 - void str.reserve(size_t n)
 n길의 문자열 만큼 capacity를 할당 한다.
 */
string str1;
str1.reserve(10);
str1.capacity();     // 16    
str1 = "0123456789";
~~~
* * *

## clear()
~~~c++
/*
 - void str.clear()
 string 문자열을 지운다.
 length/size 는 0이 되고, capacity의 경우 그대로 유지 된다.
 */
string str1 = "12345";
str1.size();     // 5
str1.capacity(); // 8
str1.clear();
str1.size();     // 0
str1.capacity(); // 8
~~~
* * *

## empty()
~~~c++
/*
 - bool str.empty()
 string 문자열 (size/length)가 0이라면 true를 그렇지 않다면 false를 반환 한다.
 capacity의 값에는 영향을 받지 않는다.
 */
string str1 = "12345";
str1.empty();     // false
str1.clear();
str1.empty();     // true
string str2;
str2.empty();     // true
~~~
* * *

## c_str()
~~~c++
/*
 - const char* str.c_str()
 c++의 string을 c의 char* 형식의 문자열로 반환 한다.
 */
string str1 = "12345";
char *cstr = NULL;
cstr = str1.c_str(); // cstr "12345";
~~~
* * *

## substr()
~~~c++
/*
 - string str.substr()
 - string str.substr(size_t index, size_t len)
index 부터 len 까지 문자열을 반환 한다.
 */
string str1 = "12345";
string str2 = str1.substr(); // 12345;
string str3 = str1.substr(3,2); // 45;
~~~
* * *

## replace()
~~~c++
/*
 - string str.replace(size_t index, size_t len, const string &str)
index 부터 len 까지 문자열을 str로 대체 한다.
 */
string str1 = "12345";
string str2 = "ab";
string str3 = str1.replace(3,2); // 123ab;
~~~
* * *

## compare()
~~~c++
/*
 - int str.compare(string str1)
 - int str.compare(size_t index, size_t len ,string str1, size_t str1_index, size_t str1_len)
index 부터 len 까지 문자열을 str로 대체 한다.
 */
string str1 = "abc";
string str2 = "abc";
string str3 = "def";
string str4 = "defabc";
str1.compare(str2); // 0;
str1.compare(str3); // < 0; 
str1.compare(0,3 str4, 3,3); // 0;
~~~
* * *

## copy()
~~~c++
/*
 - size_t str.copy(char *arry, size_t len, size_t index)
 array의 index 부터 len 까지 문자열을 복사 한다.
 */
string str;
char array[10] = {"hello"}
str.copy(array, 0, 5 ); // hello
~~~
* * *

## find()
~~~c++
/*
 - size_t str.find(const string &str, size_t index)
 - size_t str.find(const char *arr, size_t index)
 입력 문자열과 일치하는게 있는지 확인 한다.
 일치 할 경우 첫 index의 위치를 반환 한다.
 */
string str = "hello";
str.find("l",0); // 2
str.find("l",3); // 3
~~~
* * *

## push_back()
~~~c++
/*
 - void str.push_back(char c)
 문자열 맨 뒤에 문사 상수를 더하는 함수다.
 */
string str = "hello";
str.push_back("1"); // hello1
~~~
* * *

## pop_back()
~~~c++
/*
 - void str.pop_back(char c)
 문자열 맨 뒤에 문사 상수를 삭제 하는 함수다.
 */
string str = "hello";
str.pop_back(); // hell
~~~
* * *

## begin()/end()
~~~c++
/*
 - iterator begin();
 - iterator end();
 문자열의 첫번째 / 마지막 (iterator 포인터)를 반환한다.
 */
for (string::iterator iter = str1.begin(); iter != str1.end(); ++iter) {
    cout << *iter << endl;
}

~~~
* * *

## swap()
~~~c++
/*
 - void swap(string& str1, string& str2);
  str1 과 str2를 바꾼다.
 */
string str1 = "hello";
string str2 = "world";
swap(str1, str2); // str1=world, str2=hello
~~~
* * *

## `+` (operator)
~~~c++
/*
 - 연산자를 통해 문자열을 이어 붙 일 수있다.
 */
string str1 = "hello";
string str2 = "world";
string str3 = str1 + str2; // hello world
~~~
* * *