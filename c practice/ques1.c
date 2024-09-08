/*Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n) dimensions A(n-1) cut in half
 parallel to its shorter sides. Write in program to calculate and print paper sizes A0, A1, A2,... A8.*/
 #include <stdio.h>

void calculatePaperSizes(int n, int width, int height) {
    printf("A%d: %d mm x %d mm\n", n, width, height);
    
    if (n > 0) {
        // Calculate dimensions for the next size A(n-1)
        calculatePaperSizes(n - 1, height, width / 2);
    }
}

int main() {
    // Dimensions of A0 paper
    int widthA0 = 1189;
    int heightA0 = 841;

    // Print A0 to A8 paper sizes
    for (int i = 0; i <= 8; ++i) {
        calculatePaperSizes(i, widthA0, heightA0);
        printf("\n");
    }

    return 0;
}
