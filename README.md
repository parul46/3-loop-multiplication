# 3-loop-multiplication
Implemention of the standard 3-loop matrix-matrix multiplication 

Is it logically correct to change the order of the loops? 
Changing the order of the loops would result in the change in the ideal answer. If we consider 2 matrices of order NxM and MxP then the resultant matrix must be of order NxP. But when we interchange the order of 1st and 2nd loops the resultant matrix would of order PxN which would change the whole answer.
Now if we consider 2 matrices with same order i.e NxN, the ideal answer would still change. We might but get the order of the resultant matrix correct its elements would not have the correct values. 
Since for multiplication we have to multiply nth ‘row’ of A matrix to the mth ‘column’ of B matrix, changing the order would result in vice versa of the required solution. 

 Performance for different matrix sizes (large size matrices)


•	dot product -This function returns a scalar product of two input vectors, which must have the same length.
•	matmul - It returns the matrix product of two matrices, which must be consistent


