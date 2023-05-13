#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF
#include "NewVector.hpp"
#include <vector>

template<typename T>
class Matrix{
private:
	std::vector<T> mData; // entries of matrix
	int mNumRows, mNumCols; // dimensions

public:
    // copy constructor
	Matrix(const Matrix& otherMatrix)
    {
        mNumRows = otherMatrix.mNumRows;
        mNumCols = otherMatrix.mNumCols;
        T nData = mNumRows * mNumCols;
        mData.resize(nData); 
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
               mData[n] = otherMatrix(i,j);
            }
        }
    }

	Matrix(int numRows, int numCols)
    {
        assert(numRows > 0);
        assert(numCols > 0);

        mNumRows = numRows;
        mNumCols = numCols;
        T nData = mNumRows * mNumCols;
        mData.resize(nData); 
    }

	int GetNumberOfRows() const
    {
        return mNumRows;
    }

	int GetNumberOfColumns() const
    {
        return mNumCols;
    }

	T& operator()(int i, int j)
    {
        assert(i >= 0);
        assert(i < mNumRows);
        assert(j >= 0);
        assert(j < mNumCols);

        int n = (mNumCols * i) + j; 

        return mData[n];
    }

	T const& operator()(int i, int j) const
    {
        assert(i >= 0);
        assert(i < mNumRows);
        assert(j >= 0);
        assert(j < mNumCols);

        int n = (mNumCols * i) + j; 

        return mData[n];
    }

	// overloaded assignment operator
	Matrix& operator=(const Matrix& otherMatrix)
    {
        assert(mNumRows == otherMatrix.mNumRows);
        assert(mNumCols == otherMatrix.mNumCols);

        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
                mData[n] = otherMatrix.mData[n];
            }
        }
        return *this;
    }

	Matrix operator-() const // unary -
    {
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
                mat(i,j) = -mData[n];
            }
        }
        return mat;
    }

	Matrix operator+(const Matrix& m1) const // binary +
    {
        assert(mNumRows == m1.mNumRows);
        assert(mNumCols == m1.mNumCols);

        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
                mat(i,j) = mData[n] + m1.mData[n];
            }
        }
        return mat;
    }

	Matrix operator-(const Matrix& m1) const // binary -
    {
        assert(mNumRows == m1.mNumRows);
        assert(mNumCols == m1.mNumCols);

        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
                mat(i,j) = mData[n] - m1.mData[n];
            }
        }
        return mat;
    }

	// scalar multiplication
	Matrix operator*(double a) const
    {
        Matrix mat(mNumRows, mNumCols);
        for (int i = 0; i < mNumRows; i++)
        {
            for (int j = 0; j < mNumCols; j++)
            {
                int n = (mNumCols * i) + j; 
                mat(i,j) = a*mData[n];
            }
        }
        return mat;
    }

    std::vector<T> const& getStorage(){
        return &mData;
    }
}; // class Matrix


//matrix-vector multiplications
template<typename T>Vector<T>  operator*(const Matrix<T>& m, const Vector<T>& v)
{
    int original_vector_size = v.size();
	assert(m.GetNumberOfColumns() == original_vector_size);

	T new_vector_length = m.GetNumberOfRows();
	Vector<T> new_vector(new_vector_length);

	for (int i = 0; i < new_vector_length; i++)
	{
		for (int j = 0; j < original_vector_size; j++)
		{
			new_vector[i] += m(i,j)*v[j];
		}
	}

	return new_vector;
}

template<typename T>Vector<T> operator*(const Vector<T>& v, const Matrix<T>& m)
{
	int original_vector_size = v.size();
	assert(m.GetNumberOfRows() == original_vector_size);

	T new_vector_length = m.GetNumberOfColumns();
	Vector<T> new_vector(new_vector_length);

	for (int i = 0; i < new_vector_length; i++)
	{
		for (int j = 0; j < original_vector_size; j++)
		{
			new_vector[i] += v[j]*m(j,i);
		}
	}

	return new_vector;
}


#endif
