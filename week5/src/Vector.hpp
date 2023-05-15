#ifndef VECTORHEADERDEF
#define VECTORHEADERDEF

#include <vector>
#include <cmath>

template<typename T>
class Vector
{
    private:
        std::vector<T> mData; // data stored in vector

    public:
        // Copy constructor is created by default.
        Vector(int size)
        {
            mData.resize(size);
        }

        int size() const
        {
            return mData.size();
        }

        T& operator[](int i)
        {
            return mData[i];
        }

        T const& operator[] (int i)const
        {
            return mData[i];
        }

        // assignment operator is created by default.

        // overloading the unary - operator
        Vector operator-() const
        {
            int mSize = mData.size();
            Vector v(mSize);
            for (int i = 0; i < mSize; i++)
            {
                v[i] = -mData[i];
            }
            return v;
        }

        // overloading the binary + operator
        Vector operator+(const Vector& v1) const
        {
            int mSize = mData.size();
            Vector v(mSize);
            for (int i = 0; i < mSize; i++)
            {
                v[i] = mData[i] + v1.mData[i];
            }
            return v;
        }

        // overloading the binary - operator
        Vector operator-(const Vector& v1) const
        {
            int mSize = mData.size();
            Vector v(mSize);
            for (int i = 0; i < mSize; i++)
            {
                v[i] = mData[i] - v1.mData[i];
            }
            return v;
        }

        // scalar multiplication
        Vector operator*(double a) const
        {
            int mSize = mData.size();
            Vector v(mSize);
            for (int i = 0; i < mSize; i++)
            {
                v[i] = a*mData[i];
            }
            return v;
        }

        // p-norm method
        double CalculateNorm(int p = 2) const
        {
            int mSize = mData.size();
            double sum = 0.0;
            for (int i = 0; i < mSize; i++)
            {
                sum += pow(std::abs(mData[i]), p);
            }
            return pow(sum, 1.0 / ((double)(p)));
        }

        std::vector<T> const& getStorage(){
            return mData;
        }
};

#endif