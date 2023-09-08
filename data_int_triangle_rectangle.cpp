#include <stdio.h>
#include "my_asserts.h"

void print_rectangle_data_with_x_y(const int* data, const size_t size_x, const size_t size_y);
void print_rectangle_data_without_x_y(const int* data);

void print_triangle_data_with_size_cathet(const int* data, const size_t size_cathet);
void print_triangle_data_without_size_cathet(const int* data);

size_t setter_size_rectangle_data(int* data, const int x, const int y);
size_t getter_size_rectangle_data(const int* data);

size_t setter_size_triangle_data(int* data, const int x);
size_t getter_size_triangle_data(const int* data);

void print_rectangle_data_with_x_y(const int* data, const size_t size_x, const size_t size_y){
    my_assert(data != NULL, return);
    for(size_t x = 0; x < size_x; x++){
        for(size_t y = 0; y < size_y; y++){
            printf("%d ", *(data + x * size_x + y));
        }
        printf("%c", '\n');
    }
}
void print_rectangle_data_without_x_y(const int* data){
    my_assert(data != NULL, return);
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
    my_assert(data != NULL, return);
    for(size_t x = 0; x < size_cathet; x++){
        for(size_t y = 0; y <= x; y++){
            printf("%d ", *(data + (1 + x) * x / 2 + y));
        }
        printf("%c", '\n');
    }
}
void print_triangle_data_without_size_cathet(const int* data){
    my_assert(data != NULL, return);
    const size_t size_cathet = (size_t)*(data);
    const size_t otstup = 1;
    for(size_t x = 0; x < size_cathet; x++){
        for(size_t y = 0; y <= x; y++){
            printf("%d ", *(data + otstup + (1 + x) * x / 2 + y));
        }
        printf("%c", '\n');
    }
}

size_t setter_size_rectangle_data(int* data, const int x, const int y){
    my_assert(data != NULL, return 0);
    size_t buf = (size_t)data[0] * (size_t)data[1];
    data[0] = x;
    data[1] = y;
    return buf;
}
size_t getter_size_rectangle_data(const int* data){
    my_assert(data != NULL, return 0);
    return (size_t)data[0] * (size_t)data[1];
}

size_t setter_size_triangle_data(int* data, const int x){
    my_assert(data != NULL, return 0);
    size_t buf = (size_t)data[0];
    data[0] = x;
    return buf;
}
size_t getter_size_triangle_data(const int* data){
    my_assert(data != NULL, return 0);
    return (size_t)data[0];
}

