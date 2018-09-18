#include <assert.h>

template <int Width, int Height, typename ValueType>
class Array2D {
public:
    Array2D() { clear(0); }

public:
    void clear(ValueType symbol)
    {
        for (int y = 0; y < Height; ++y) {
            for (int x = 0; x < Width; ++x) {
                m_arr[y][x] = symbol;
            }
        }
    }

    void set(int x, int y, ValueType symbol)
    {
        assert(x >= 0 && x < Width);
        assert(y >= 0 && y < Height);

        m_arr[y][x] = symbol;
    }

    ValueType get(int x, int y)
    {
        assert(x >= 0 && x < Width);
        assert(y >= 0 && y < Height);

        return m_arr[y][x];
    }

protected:
    ValueType m_arr[Height][Width];
};

template <int Length, typename ValueType>
class StaticArray {
public:
    StaticArray() { clear(0); }

public:
    void clear(ValueType val)
    {
        for (int i = 0; i < Length; ++i) {
            m_arr[i] = val;
        }
    }

    void set(int index, ValueType val)
    {
        assert(index >= 0 && index < Length);

        m_arr[index] = val;
    }

    ValueType get(int index)
    {
        assert(index >= 0 && index < Length);

        return m_arr[index];
    }

protected:
    ValueType m_arr[Length];
};