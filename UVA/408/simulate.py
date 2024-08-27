"""
try to simulate a number genrator function
seed(x+1) = (seed(x) + step) % mod
for diffrenat values of step and mod
"""


def simulate_PNRG(step, mod):
    """simulate pseudo number genrator"""
    print(f"step = {step} and mod = {mod}\n")

    nums = []
    count = 1
    x0 = step
    while True:
        xn = x0 % mod
        x0 = xn + step
        nums.append(xn)
        print(f"seed({count}) = [ seed({count-1}) + {step} ] % {mod}", end="")
        print(f" = {xn}")
        if xn == 0:
            break
        count += 1
    if mod % step:
        print(f"Good choice Number of pseudo-numbers generated is {len(nums)}")
    else:
        print(f"Bad choice Number of pseudo-numbers generated is {len(nums)}")


if __name__ == "__main__":
    simulate_PNRG(3, 5)
    print("\n====================\n")
    simulate_PNRG(5, 20)
    print("\n====================\n")
    simulate_PNRG(9, 81)
    print("\n====================\n")
    simulate_PNRG(2, 7)
    print("\n====================\n")
    simulate_PNRG(5, 13)
    print("\n====================\n")
