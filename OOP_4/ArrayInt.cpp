#include "ArrayInt.h"

void ArrayInt::sort() {
    for (int k = 0;k<m_length-1;++k){
        for (int i = 0;i<m_length-1;++i) {
            if (m_data[i] > m_data[i + 1]) {
                int k = m_data[i];
                m_data[i] = m_data[i + 1];
                m_data[i + 1] = k;
            }
        }
    }
}

void ArrayInt::Print() {
    for(int i=0; i<m_length;++i)    cout << m_data[i];
}