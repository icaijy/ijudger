# mle_example.py
import sys
import resource

# 申请大约 3MB 的列表
n = 3 * 1024 * 1024 // 8  # 3MB / 8 字节 per int
arr = [0] * n

# 输出到 stdout 正常信息
print(f"Allocated array of size {n}")

# 输出实际占用内存到 stderr
usage = resource.getrusage(resource.RUSAGE_SELF).ru_maxrss / 1024  # MB
print(f"Memory used: {usage:.2f} MB", file=sys.stderr)
