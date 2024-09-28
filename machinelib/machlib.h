#ifndef MACHLIB_H
#define MACHLIB_H

#include <stdio.h>
#include <stdlib.h>

// Matrix Operations
double** create_matrix(int rows, int cols);
void print_matrix(double** matrix, int rows, int cols);
double** transpose_matrix(double** matrix, int rows, int cols);
double** add_matrices(double** A, double** B, int rows, int cols);
double** multiply_matrices(double** A, double** B, int rows_A, int cols_A, int cols_B);
double* create_vector(int size);
double dot_product(double* vec1, double* vec2, int size);
double* vector_addition(double* vec1, double* vec2, int size);
void scalar_multiply_matrix(double** matrix, double scalar, int rows, int cols);
void scalar_multiply_vector(double* vector, double scalar, int size);

// Activation Functions
double sigmoid(double x);
double relu(double x);
double tanh_activation(double x);
double* softmax(double* logits, int size);

// Loss Functions
double mean_squared_error(double* predictions, double* targets, int size);
double binary_cross_entropy(double* predictions, double* targets, int size);
double categorical_cross_entropy(double* predictions, double* targets, int size);

// Dense Layer Operations
double* forward_dense(double** input, double** weights, double* bias, int input_size, int output_size);
void backward_dense(double** gradients, double** inputs, double** weights, int input_size, int output_size);
void gradient_descent_update(double** weights, double** gradients, double learning_rate, int rows, int cols);
void sgd(double** weights, double** gradients, double learning_rate, int rows, int cols);
void l2_regularization(double** weights, double lambda, int rows, int cols);

// Convolution and Pooling Layers
double*** convolution2d(double*** input, double**** filters, int num_filters, int input_height, int input_width, int filter_size);
double*** max_pooling(double*** input, int pool_size, int stride, int input_height, int input_width);
double*** average_pooling(double*** input, int pool_size, int stride, int input_height, int input_width);
double* rnn_cell(double* input, double* hidden_state, double** weights_input, double** weights_hidden, double* bias);
double* lstm_cell(double* input, double* hidden_state, double* cell_state, double** weights_input, double** weights_hidden, double* bias);

// Advanced Optimizers
void adam(double** weights, double** gradients, double* m, double* v, double beta1, double beta2, double learning_rate, int rows, int cols);
void rmsprop(double** weights, double** gradients, double* cache, double learning_rate, double decay_rate, int rows, int cols);

// Additional Loss Functions
double hinge_loss(double* predictions, double* targets, int size);
double kl_divergence(double* p, double* q, int size);

// Regularization and Normalization
void dropout(double* input, double dropout_rate, int size);
void batch_normalization(double* input, double* gamma, double* beta, double epsilon, int size);

// Advanced Operations
double** multithreaded_matrix_multiply(double** A, double** B, int rows_A, int cols_A, int cols_B, int num_threads);
double*** gpu_accelerated_convolution(double*** input, double**** filters, int num_filters, int input_height, int input_width, int filter_size);

#endif MACHLIB_H
