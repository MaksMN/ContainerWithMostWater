def max_area(heights):
    left = 0
    right = len(heights) - 1
    max_area = 0

    while left < right:
        height = min(heights[left], heights[right])
        width = right - left
        current_area = height * width
        max_area = max(max_area, current_area)

        if heights[left] < heights[right]:
            left += 1
        else:
            right -= 1

    return max_area

string_heights = '2 10 6 3 8 5'

array_heights = list(map(int, string_heights.split()))

print(max_area(array_heights))