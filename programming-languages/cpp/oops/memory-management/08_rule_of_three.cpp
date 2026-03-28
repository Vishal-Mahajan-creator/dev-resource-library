class Example {

private:
    int* data;

public:

    Example(int val) {
        data = new int(val);
    }

    // Copy Constructor
    Example(const Example &obj) {
        data = new int(*obj.data);
    }

    // Assignment Operator
    Example& operator=(const Example &obj) {
        if(this != &obj) {
            delete data;
            data = new int(*obj.data);
        }
        return *this;
    }

    ~Example() {
        delete data;
    }
};