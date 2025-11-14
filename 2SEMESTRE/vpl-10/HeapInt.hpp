#include <iostream>

class HeapInt{
    private:
        int * intptr = new int;

    public:
        // Métodos construtores
        HeapInt();
        HeapInt(int num);
        
        HeapInt(const HeapInt &ponteiro); 

        // Método destrutor
        ~HeapInt();

        
        HeapInt& operator = (const HeapInt& num_ptr);
        HeapInt& operator = (int num);

        
        HeapInt operator + (const HeapInt& num_ptr) const;
        HeapInt operator - (const HeapInt& num_ptr) const;

        
        bool operator == (const HeapInt& num_ptr) const;

        
        friend std::istream& operator >> (std::istream& is, HeapInt& num_ptr);
        friend std::ostream& operator << (std::ostream& os, const HeapInt& num_ptr);
};



inline std::istream& operator >> (std::istream& is, HeapInt& num_ptr)
{
    
    is >> *(num_ptr.intptr);
    return is;
}

inline std::ostream& operator << (std::ostream& os, const HeapInt& num_ptr)
{
    os << *(num_ptr.intptr);
    return os;
}