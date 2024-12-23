// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий длины 3 в массиве.
int task2(unsigned A[], size_t n) {
    if (n < 3) return 0;

    int count = 0;

    for (size_t i = 0; i < n - 2; ++i) {
        if (A[i] == A[i + 1] && A[i + 1] == A[i + 2]) {
            ++count;
            i += 2;
        }
    }

    return count;
}
