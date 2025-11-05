# ijudger

## 项目简介

ijudger 是一个小型在线判题系统，适用于竞赛训练和算法题测试。
它支持 Python 和 C++ 代码运行，并可设置时间和内存限制。

## 功能

* 对指定题目的测试数据进行判题
* 支持 Python 与 C++
* 可以生成 JSON 格式的题目测试数据（支持 `makeproblemjson` 命令）
* 时间与内存限制可配置
* 支持 TLE / RE / MLE / WA / AC 判定

## 安装

推荐使用 `pip` 安装（PyPI）：

```
pip install ijudger
```

或者从 GitHub 克隆：

```
git clone https://github.com/你的仓库/ijudger.git
cd ijudger
pip install .
```

## 使用方法

### 1. 生成 JSON 测试数据

```
makeproblemjson <题目文件夹> <时间限制(s)> <内存限制(MB)> [输出文件.json]
```

示例：

```
makeproblemjson aplusb 1 128 aplusb.json
```

