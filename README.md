# c-terminal
一些标准终端命令的C封装，用于单片机的调试输出和终端程序开发。

已经对Windows上的超级终端测试过，同时也对CecureCRT上的终端测试过，对以下大部分终端命令（控制码）都支持：

### 终端命令（控制码）说明
```
\033[0m 关闭所有属性
\033[1m 设置高亮度
\033[4m 下划线
\033[5m 闪烁
\033[7m 反显
\033[8m 消隐
\033[fm 设置前景色为f，f取值见下文
\033[bm 设置背景色为b，b取值见下文
\033[b;fm 设置背景色为b，前景色为f
\033[nA 光标上移n行
\033[nB 光标下移n行
\033[nC 光标右移n行
\033[nD 光标左移n行
\033[r;cH设置光标位置为r行c列
\033[2J 清屏
\033[K 清除从光标到行尾的内容
\033[s 保存光标位置(Linux终端不支持，貌似仅在ANSI终端有效)
\033[u 恢复光标位置(Linux中断不支持，貌似仅在ANSI终端有效)
\033[?25l 隐藏光标
\033[?25h 显示光标
```

### 颜色值说明
#### 前景色（字体颜色）
```
30:黑
31:红
32:绿
33:黄
34:蓝色
35:紫色
36:深绿
37:白色
```
#### 背景色说明：
```
40:黑
41:深红
42:绿
43:黄色
44:蓝色
45:紫色
46:深绿
47:白色
```

下面是可以用于测试终端对这些命令支持清空的脚本（保存到文件里面执行）：
```shell
echo -e "\033[2J" # 清屏
echo -e "\033[1;1H" # 光标移到左上角
echo -e "\033[0m" # 关闭所有属性
echo -e "\033[1m高亮度\033[0m" # 设置高亮度
echo -e "\033[4m下划线\033[0m" # 下划线
echo -e "\033[5m闪烁\033[0m" # 闪烁
echo -e "\033[7m反显\033[0m" # 反显
echo -e "\033[8m消隐\033[0m" # 消隐
echo -e "\033[42;31m绿背景 红前景\033[0m" # 前景背景色设置
echo -e "\033[5B" # 光标下移5行
echo -e "\033[3A" # 光标上移3行
echo -e "\033[4C" # 光标右移4行
echo -e "\033[2D" # 光标左移2行
echo Hello
echo -e "\033[s" # 保存光标位置
echo -e "\033[5B"
echo Below 5 Rows
echo -e "\033[u" # 恢复光标位置
echo World
echo -e "\033[10B" # 下移10行
```
下面是在不同的中断下执行得到的结果截图：
#### ANSI:
> ![image](https://raw.githubusercontent.com/sintrb/c-terminal/master/scr-shot/ansi.png)

#### Linux:
> ![image](https://raw.githubusercontent.com/sintrb/c-terminal/master/scr-shot/linux.png)

#### SCOANSI:
> ![image](https://raw.githubusercontent.com/sintrb/c-terminal/master/scr-shot/scoansi.png)

通过以上截图大致能够看出来，ANSI终端对上述控制命令的支持程度最高，但需要提的是ANSI终端没法支持Linux的某些程序，比如nano（或者是本人设置上的问题。。）。



=

## 怎么获取这些代码？

* 如果你只是想简单的使用这些代码的话你可以把它当作一个压缩包下载到你的电脑上，点击右边的“Download ZIP”:

![image](https://raw.githubusercontent.com/sintrb/forgithub/master/img/screenshots/githubdownloadzip.png)


* 如果你喜欢这些代码，那么你可以加星：

![image](https://raw.githubusercontent.com/sintrb/forgithub/master/img/screenshots/githubstart.png)

* 如果你觉得这些代码还有很多可以改善的地方，那么请先fork一下（欢迎fork）：

![image](https://raw.githubusercontent.com/sintrb/forgithub/master/img/screenshots/githubfork.png)

* fork之后这些代码就变成了你的了，你可以从自己的仓库中把它们clone到你的电脑上，之后的操作就和git一样了：

![image](https://raw.githubusercontent.com/sintrb/forgithub/master/img/screenshots/githubsshclone.png)

**享受开源带来的乐趣吧**

