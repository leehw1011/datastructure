def find_max_min(A):
    max = A[0]
    min = A[0]
    for i in range(1,len(A)):
        if max < A[i]:
            max = A[i]
        if min > A[i]:
            min = A[i]
    return (max,min)