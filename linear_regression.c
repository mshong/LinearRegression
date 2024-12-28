#include <stdio.h>

// Function to calculate the mean
double mean(double arr[], int size) {
    double sum = 0.0;
        for (int i = 0; i < size; i++) {
                sum += arr[i];
                    }
                        return sum / size;
                        }

                        // Function to calculate the slope (m) and intercept (b)
                        void linear_regression(double x[], double y[], int size, double *m, double *b) {
                            double x_mean = mean(x, size);
                                double y_mean = mean(y, size);

                                    double numerator = 0.0, denominator = 0.0;
                                        for (int i = 0; i < size; i++) {
                                                numerator += (x[i] - x_mean) * (y[i] - y_mean);
                                                        denominator += (x[i] - x_mean) * (x[i] - x_mean);
                                                            }

                                                                *m = numerator / denominator;
                                                                    *b = y_mean - (*m) * x_mean;
                                                                    }

                                                                    int main() {
                                                                        // Sample data
                                                                            double x[] = {1, 2, 3, 4, 5};
                                                                                double y[] = {2, 4, 5, 4, 5};
                                                                                    int size = sizeof(x) / sizeof(x[0]);

                                                                                        double m, b;
                                                                                            linear_regression(x, y, size, &m, &b);

                                                                                                printf("Linear Regression Model: y = %.2fx + %.2f\n", m, b);

                                                                                                    return 0;
                                                                                                    }