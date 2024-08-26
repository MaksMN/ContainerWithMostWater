#include <iostream>
#include <vector>
#include <algorithm>

int maxArea(std::vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;

    while (left < right) {
        int h = std::min(height[left], height[right]);
        int w = right - left;
        int area = h * w;
        max_area = std::max(max_area, area);

        // Двигаем указатели в сторону увеличения высоты
        if (height[left] < height[right]) {
            left++;
        }
        else {
            right--;
        }
    }

    return max_area;
}

int main() {
    std::vector<int> height = { 2, 10, 6, 3, 8, 5 };
    std::cout << "Max area: " << maxArea(height) << std::endl;
    return 0;
}
