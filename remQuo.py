def divide_and_remainder(dividend, divisor):
    quotient = dividend // divisor
    remainder = dividend % divisor
    return quotient, remainder


# Example usage:
dividend = 10
divisor = 3

quotient, remainder = divide_and_remainder(dividend, divisor)

print(f"The quotient is: {quotient}")
print(f"The remainder is: {remainder}")
