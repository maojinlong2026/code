# 成绩统计小程序2.0
# 功能：输入若干成绩，输出成绩列表、平均分、最高分、最低分、及格人数

# 第 1 步：读入一整行（用户用空格分隔成绩）
line = input("请输入成绩，用空格分开：")

# 第 2 步：手滑打了中文逗号也能用（把逗号换成空格）
line = line.replace("，", " ").replace(",", " ")

# 第 3 步：split 切成一段一段，float 转成小数，存进列表
scores = [float(x) for x in line.split()]

# 第 4 步：什么都没输入时给个提示，避免后面除以 0 报错
if len(scores) == 0:
    print("没有输入成绩哦")
else:
    # 平均分 = 总分 ÷ 个数
    avg = sum(scores) / len(scores)

    # 及格人数：从头数到尾，满 60 的计数器加一
    passed = 0
    for s in scores:
        if s >= 60:
            passed += 1

    # 输出结果
    print("成绩：", scores)
    print("平均分：", round(avg, 2))
    print("最高分：", max(scores))
    print("最低分：", min(scores))
    print("及格人数：", passed, "/", len(scores))
