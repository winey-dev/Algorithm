/*
  시작점 1:1 
  마지막 x,y

  말의 움직임     x [2, 2, 1, 1,-2,-2,-1,-1]
  말의 움직임     y [1,-1, 2,-2, 1,-1, 2,-2]
  말의 움직임은   k 개만 사용 할 수 있음 그외 이동은 원숭이의 움직임으로 

  원숭이의 움직임 x [1,0,-1,0]
  원숭이의 움직임 y [0,-1,0,1]
*/
#include <iostream>
#include <stdio.h>
using namespace std;
// horse 움직임
int h_x[] = {2, 2, 1, 1,-2,-2,-1,-1};
int h_y[] = {1,-1, 2,-2, 1,-1, 2,-2};


// monkey 움직임
int m_x[] = {1, 0,-1, 0};
int m_y[] = {0, 1, 0,-1};

// 인접 행렬 그래프 
int metrix[201][201];
int k , h, w ;
int main () {
  
    int i = 0;
    int j = 0; 
    cin >> k ;
    cin >> w >> h ;

    for (i=0; i < h; i++ ) {
        for (j=0; j < w; j++) {

        }
    }
    
    
}