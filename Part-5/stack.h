#ifndef COMP_345_PROJECT_STACK_H
#define COMP_345_PROJECT_STACK_H
#include <exception>

    const int stack_capacity = 3;

    template <typename T>
    class stack {
        T* elements;
        int capacity;
        int size;
        class StackOutofBoundException : public std::exception {
            const char * what() const noexcept override {
                return "Stack Index out of bound";
            }
        } stack_out_of_bound_exception ;
    public:
        stack() :
        elements(new T[capacity]),
        capacity(stack_capacity),
        size(0) {
        }
        explicit stack(const int& size) :
        elements(new T[capacity]),
        capacity(stack_capacity),
        size(size){
        }
        void push(const T &data) {
            if(size == capacity) {
                throw stack_out_of_bound_exception;
            }
            elements[size++] = data;
        }
        void pop() {
            if(size == 0) {
                return;
            }
            size--;
        }
        T& peek() {
            if(size == 0) {
                throw stack_out_of_bound_exception;
            }
            return elements[size-1];
        }
    };

#endif //COMP_345_PROJECT_STACK_H