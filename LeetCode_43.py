class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        digits = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}
        result = 0
        num1_len = len(num1)
        num2_len = len(num2)

        new_num1 = 0
        for i in range(num1_len):
            new_num1 = new_num1 * 10 + digits[num1[i]]
        new_num2 = 0
        for i in range(num2_len):
            new_num2 = new_num2 * 10 + digits[num2[i]]

        result = str(new_num1 * new_num2)
        return result
        