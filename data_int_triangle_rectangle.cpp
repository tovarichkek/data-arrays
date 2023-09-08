#include <stdio.h>
#include "my_asserts.h"
#include "data_int_triangle_rectangle.h"

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
    size_t* size_x = (size_t*)calloc(1, sizeof(int));
    size_t* size_y = (size_t*)calloc(1, sizeof(int));
    getter_size_rectangle_data(data, size_x, size_y);

    const size_t otstup = 2;

    for(size_t x = 0; x < *size_x; x++){
        for(size_t y = 0; y < *size_y; y++){
            printf("%d ", *(data + otstup + x * *size_x + y));
        }
        printf("%c", '\n');
    }
    free(size_x);
    free(size_y);
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
    size_t* size_cathet = (size_t*)calloc(1, sizeof(int));
    getter_size_triangle_data(data, size_cathet);
    const size_t otstup = 1;
    for(size_t x = 0; x < *size_cathet; x++){
        for(size_t y = 0; y <= x; y++){
            printf("%d ", *(data + otstup + (1 + x) * x / 2 + y));
        }
        printf("%c", '\n');
    }
    free(size_cathet);
}

size_t setter_size_rectangle_data(int* data, const size_t x, const size_t y){
    my_assert(data != NULL, return 0);
    size_t buf = (size_t)data[0] * (size_t)data[1];
    data[0] = (int)x;
    data[1] = (int)y;
    return buf;
}
size_t getter_size_rectangle_data(const int* data, size_t* x, size_t* y){
    my_assert(data != NULL, return 0);
    my_assert(x != NULL, return 0);
    my_assert(y != NULL, return 0);
    my_assert(data[0] >= 0, return 0);
    my_assert(data[1] >= 0, return 0);
    *x = (size_t)data[0];
    *y = (size_t)data[1];
    return (*x) * (*y);
}

size_t setter_size_triangle_data(int* data, const size_t x){
    my_assert(data != NULL, return 0);
    size_t buf = (size_t)data[0];
    data[0] = (int)x;
    return buf;
}
size_t getter_size_triangle_data(const int* data, size_t* x){
    my_assert(data != NULL, return 0);
    my_assert(x != NULL, return 0);
    my_assert(data[0] >= 0, return 0);
    *x = (size_t)data[0];
    return *x;
}

