#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF
#include "Vector.hpp"

template<typename T>
class Matrix{
    private:
        std::vector<T> mData; // entries of matrix
        int mNumRows, mNumCols; // dimensions

    public:
        // Copy constructor is created by default.

        Matrix(int numRows, int numCols)
        {
            mNumRows = numRows;
            mNumCols = numCols;
            mData.resize(numRows * numCols); 
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
            int n = (mNumCols * i) + j; 

            return mData[n];
        }

        T const& operator()(int i, int j) const
        {
            int n = (mNumCols * i) + j; 

            return mData[n];
        }

        // assignment operator is created by default.

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
            return mData;
        }
    }; // class Matrix


    //matrix-vector multiplications
template<typename T>Vector<T>  operator*(const Matrix<T>& m, const Vector<T>& v)
    {
        int original_vector_size = v.size();

        int result_length = m.GetNumberOfRows();
        Vector<T> result(result_length);

        for (int i = 0; i < result_length; i++)
        {
            for (int j = 0; j < original_vector_size; j++)
            {
                result[i] += m(i,j)*v[j];
            }
        }

        return result;
}

template<typename T>Vector<T> operator*(const Vector<T>& v, const Matrix<T>& m)
{
	int original_vector_size = v.size();

	int result_length = m.GetNumberOfColumns();
	Vector<T> result(result_length);

	for (int i = 0; i < result_length; i++)
	{
		for (int j = 0; j < original_vector_size; j++)
		{
			result[i] += v[j]*m(j,i);
		}
	}

	return result;
}


#endif
