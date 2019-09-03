function InsertionSort(A) {
    for(j = 1; j < A.length; j++) {
        let key = A[j];
        let i = j - 1;

        while(i > -1 && A[i] > key) {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = key;
    }
    return A;
}

let A = [5, 2, 4, 6, 1, 3];

console.log("sorted 5, 2, 4, 6, 1, 3 = ", InsertionSort(A));