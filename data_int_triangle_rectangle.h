#pragma once

void print_rectangle_data_with_x_y(const int* data, const size_t size_x, const size_t size_y);
void print_rectangle_data_without_x_y(const int* data);

void print_triangle_data_with_size_cathet(const int* data, const size_t size_cathet);
void print_triangle_data_without_size_cathet(const int* data);

size_t setter_size_rectangle_data(int* data, const int x, const int y);
size_t getter_size_rectangle_data(const int* data);

size_t setter_size_triangle_data(int* data, const int x);
size_t getter_size_triangle_data(const int* data);
