#include <stdio.h>
#include "my_asserts.h"

void print_rectangle_data_with_x_y(const int* data, const size_t size_x, const size_t size_y);
void print_rectangle_data_without_x_y(const int* data);

void print_triangle_data_with_size_cathet(const int* data, const size_t size_cathet);
void print_triangle_data_without_size_cathet(const int* data);

int setter_size_rectangle_data(int* data, const int x, const int y);
int getter_size_rectangle_data(const int* data);

int setter_size_triangle_data(int* data, const int x);
int getter_size_triangle_data(const int* data);
/*
int main(){
    int data1[] = {
    3, 5,
    10, 20, 30, 40, 50,
    11, 21, 31, 41, 51,
    12, 22, 32, 42, 52
    };
    print_rectangle_data_without_x_y(data1);

    int data2[] = {
    10, 20, 30, 40, 50,
    11, 21, 31, 41, 51,
    12, 22, 32, 42, 52
    };
    print_rectangle_data_with_x_y(data2, 3, 5);

    int data3[] = {
    5,
    1,
    2, 3,
    4, 5, 6,
    7, 8, 9, 10,
    11, 12, 13, 14, 15
    };
    print_triangle_data_without_size_cathet(data3);

    int data4[] = {
    1,
    2, 3,
    4, 5, 6,
    7, 8, 9, 10,
    11, 12, 13, 14, 15
    };
    print_triangle_data_with_size_cathet(data4, 5);

}*/

void print_rectangle_data_with_x_y(const int* data, const size_t size_x, const size_t size_y){
    for(size_t x = 0; x < size_x; x++){
        for(size_t y = 0; y < size_y; y++){
            printf("%d ", *(data + x * size_x + y));
        }
        printf("%c", '\n');
    }
}
void print_rectangle_data_without_x_y(const int* data){
    const size_t size_x = (size_t)(*data);
    const size_t size_y = (size_t)*(data + 1);
    const size_t otstup = 2;

    for(size_t x = 0; x < size_x; x++){
        for(size_t y = 0; y < size_y; y++){
            printf("%d ", *(data + otstup + x * size_x + y));
        }
        printf("%c", '\n');
    }
}

void print_triangle_data_with_size_cathet(const int* data, const size_t size_cathet){
    for(size_t x = 0; x < size_cathet; x++){
        for(size_t y = 0; y <= x; y++){
            printf("%d ", *(data + (1 + x) * x / 2 + y));
        }
        printf("%c", '\n');
    }
}
void print_triangle_data_without_size_cathet(const int* data){
    const size_t size_cathet = (size_t)*(data);
    const size_t otstup = 1;
    for(size_t x = 0; x < size_cathet; x++){
        for(size_t y = 0; y <= x; y++){
            printf("%d ", *(data + otstup + (1 + x) * x / 2 + y));
        }
        printf("%c", '\n');
    }
}

int setter_size_rectangle_data(int* data, const int x, const int y){
    int buf = data[0] * data[1];
    data[0] = x;
    data[1] = y;
    return buf;
}
int getter_size_rectangle_data(const int* data){
    return data[0] * data[1];
}

int setter_size_triangle_data(int* data, const int x){
    int buf = data[0];
    data[0] = x;
    return buf;
}
int getter_size_triangle_data(int* data){
    return data[0];
}

