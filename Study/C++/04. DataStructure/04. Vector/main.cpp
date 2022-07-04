#include <iostream>
#include <vector>

using namespace std;

/*
   
    //생성자
    vector<int> v; 비어있는 벡터 생성
    vector<int> v(5); 초기화된 5개의 원소를 가지는 vector 생성 

    //vector 맴버 함수
    assign(a,b); b 의 값으로 a개의 원소를 할당
    at(idx); idx 번째 원소를 참조 (v[idx] 보다 속도는 느리지만 범위를 점검) 
    v[idx]; 속도는 at보다 빠르지만 범위를 점검하지 않음
    v.front; 첫번째 원소를 참조;
    back; 마지막 원소를 참조;
    begin/cbegin/crbegin; 첫번째 원소를 기리침(iterator 반환)
    end/cend/crend; 마지막 원소를 기리침(iterator 반환)
    capacity; 할당된 공간의 크기를 리턴, 크기가 증가될 때마다 기존 메모리*2 증가
    size; 원소의 갯수를 리턴 
    clear; 모든 원소 제거; 메모리는 삭제하지는 않음
    insert(a,b); a번째 위치에 3의 값을 삽입
    insert(a,b,c); a번째 위치에 b개의 c값을 삽입
    erase; iter가 가리키는 원소를 제거
    push_back(a); 마지막 원소 뒤에 원소 a를 추가 
    pop_back() 마지막 원소를 제거 
    data;
    emplace;
*/
int main() {
   vector <int> v;

    return 0;
}

