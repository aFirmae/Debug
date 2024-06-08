from solve import Solution
import argparse

arg = argparse.ArgumentParser()

args = vars(arg.parse_args())

solve_method = args.get("method", "dfs")


def main():
    s = Solution()

    if(s.solve(solve_method)):
        s.show_solution()


if __name__ == "__main__":
    main()