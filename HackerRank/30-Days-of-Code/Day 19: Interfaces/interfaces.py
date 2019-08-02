class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        result_sum = 0
        for i in range(1, n + 1):
            if n % i == 0:
                result_sum += i
        return result_sum
