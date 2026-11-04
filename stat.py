# -*- coding: utf-8 -*-
import csv

# 第一步：把 CSV 里的成绩全部读出来，放进一个列表
scores = []
with open("scores.csv", "r", encoding="utf-8") as f:
    reader = csv.DictReader(f)          # 按表头读，每行是一个字典
    for row in reader:
        scores.append(int(row["成绩"]))  # 取出“成绩”这一列，转成整数

# 第二步：算统计量
avg = sum(scores) / len(scores)   # 平均分
mx = max(scores)                  # 最高分
mn = min(scores)                  # 最低分

passed = 0                        # 及格人数，先设为 0
for s in scores:                  # 一个一个看
    if s >= 60:                   # 60 及以上
        passed += 1               # 计数器加一

# 第三步：把结果写进新的 CSV
with open("result.csv", "w", newline="", encoding="utf-8") as f:
    writer = csv.writer(f)
    writer.writerow(["项目", "数值"])
    writer.writerow(["总人数", len(scores)])
    writer.writerow(["平均分", round(avg, 2)])
    writer.writerow(["最高分", mx])
    writer.writerow(["最低分", mn])
    writer.writerow(["及格人数", passed])

# 顺手在屏幕上打印一遍，方便截图
print("总人数:", len(scores))
print("平均分:", round(avg, 2))
print("最高分:", mx)
print("最低分:", mn)
print("及格人数:", passed)
print("结果已写入 result.csv")
