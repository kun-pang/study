[TOC]

### 1、概述

#### 1.1、版本控制器的方式

>a、集中式版本控制工具（如：SVN、CVS）
>
>​	集中式版本控制工具，版本库是集中存放在中央服务器的，团队里的每个人工作时从中央服务器中下载代码，个人修改后然后提交到中央服务器中。（必须联网才能工作，局域网或者互联网）。
>
>![](img/svn.png)
>
>b、分布式版本控制工具（如：git）
>
>​	分布式版本控制系统没有“中央服务器”，每个人的电脑上都是一个完整的版本库，这样工作的时候，无需要联网了，因为版本库就在你自己的电脑上。多人协作只需要各自的修改推送给对方，就能互相看到对方的修改了。  
>
>![](img/Git.png)

#### 1.2、git创建

>a、Git是Linus Torvalds(开发linux的核心人员之一) 为了帮助管理 Linux 内核开发而开发的一个开放源码的版本控制软件  
>
>b、特点：
>
>​	速度、简单的设计、对非线性开发模式的强力支持（允许成千上万个并行开发的分支）、完全分布式、有能力高效管理类似 Linux 内核一样的超大规模项目（速度和数据量）  

#### 1.3、git工作流程

![](img/git工作流程.png)

> 解释：
>
> 1. clone（克隆）: 从远程仓库中克隆代码到本地仓库  。
> 2. checkout （检出）:从本地仓库中检出一个仓库分支然后进行修订  。
> 3. add（添加）: 在提交前先将代码提交到暂存区  。
> 4. commit（提交）: 提交到本地仓库。本地仓库中保存修改的各个历史版本  。
> 5. fetch (抓取) ： 从远程库，抓取到本地仓库，不进行任何的合并动作，一般操作比较少  。、
> 6. pull (拉取) ： 从远程库拉到本地库，自动进行合并(merge)，然后放到到工作区，相当于
> 	fetch+merge  
> 7. push（推送） : 修改完成后，需要和团队成员共享代码时，将代码推送到远程仓库  

### 2、常用命令

#### 2.1、linux的相关指令

>- ls/ll 查看当前目录  
>- cat 查看文件内容  
>- touch 创建文件  
>- vi vi编辑器（使用vi编辑器是为了方便展示效果，学员可以记事本、editPlus、notPad++等其它编
>	辑器）  
>- mkdir 创建目录
>- alias 起别名命令 类似c中#define
>- rm 删除文件/目录

#### 2.2、git相关指令

>1. [git add](####3.5.1、提交到仓库) 提交到暂存区
>2. [git commit ](####3.5.1、提交到仓库) 提交到本地仓库
>3. [git log ](3.5.3、查看提交日志) 查看日志
>4. [git reset  ](####3.5.4、版本回退) 版本回退
>5. [git reflog ](####3.5.5、查看所有操作记录（包括已经被删除的操作记录）)  查看所有操作记录（包括已经被删除的操作记录）
>6. [git ls-files](####3.5.6、查看仓库文件) 查看仓库文件
>7. [ .gitignore ](####3.5.7 、忽略文件) 忽略文件
>8. [git diff ](#####3.5.8、查看差异) 查看差异
>9. [git rm ](####3.5.9、删除文件) 删除文件
>
>

### 3、git指令与操作

#### 3.1、基本配置

>Git GUI：Git提供的图形界面工具
>Git Bash：Git提供的命令行工具
>当安装Git后首先要做的事情是设置用户名称和email地址。这是非常重要的，因为每次Git提交都会使用
>该用户信息  

>a、打开git bash
>
>b、设置用户信息
>
>```txt
>git config --global user.name “itcast”
>git config --global user.email “hello@itcast.cn”
>```
>
>>“itcast”:用户名
>>
>>“hello@itcast.cn”：邮箱（可以是不存在的）
>
>![](img/git配置用户信息.png)
>
>c、查看配置信息  
>
>```txt
>git config --global user.name
>git config --global user.email
>```

#### 3.2、为常用指令配置别名（可选）  

>Ⅰ、
>
>```txt
>1. 打开用户目录，创建 .bashrc 文件
>部分windows系统不允许用户创建点号开头的文件，可以打开gitBash,执行 touch ~/.bashrc
>2.在 .bashrc 文件中输入如下内容：
>	#用于输出git提交日志
>	alias git-log='git log --pretty=oneline --all --graph --abbrev-commit'
>	#用于输出当前目录所有文件及基本信息
>	alias ll='ls -al'
>3. 打开gitBash，执行 source ~/.bashrc
>```
>
>Ⅱ、
>
>```html
>打开gitBash，直接使用alias命令创建别名
>alias 别名='具体命令'
>```

#### 3.3、解决GitBash乱码问题  

>1. 打开GitBash执行下面命令  
>
>```txt
>git config --global core.quotepath false
>```
>
>2.${git_home}/etc/bash.bashrc 文件最后加入下面两行  
>
>```txt
>export LANG="zh_CN.UTF-8"
>export LC_ALL="zh_CN.UTF-8"
>```
>
>>新版git，没有这个问题。
>>
>>${git_home}为git的安装目录，可以通过where git 来寻找。

#### 3.4、获取本地仓库

>1）在电脑的任意位置创建一个空目录（例如test）作为我们的本地Git仓库
>2）进入这个目录(可以是已经存在的)中，点击右键打开Git bash窗口
>3）执行命令git init
>4）如果创建成功后可在文件夹下看到隐藏的.git目录  
>
>![](img/git_Init.png)

#### 3.5、基础操作

##### 3.5.1、提交到仓库

![](img/git状态.png)

>![](img/git未提交到缓存区.png)
>
>1. git add (工作区 --> 暂存区)
>
>	![](img/git提交到缓存区.png)
>
>	```html
>	git add [文件/目录名/.]
>	```
>
>	>[文件名/.] 需要添加的文件或者该目录下的全部文件和目录
>
>	
>
>2. git commit (暂存区 --> 本地仓库)  
>
>![](img/git提交到仓库.png)
>
>```html
>1、git commit -m"提交信息"
>2、git commit -am"提交信息" 
>```
>
>>-m：message，提交信息的意思
>>
>>-am：git add与git commit合在一起的写法

##### 3.5.2、查看状态

>```html
>git status
>```
>
>>红色文件：未放入暂存区。
>>
>>绿色文件：未放入仓库（已经放入暂存区）。
>>放入仓库文件，不显示。

##### 3.5.3、查看提交日志

>```html
>1、git log [option]	
>2、git log --pretty=oneline --all --graph --abbrev-commit    <==等价于==>     git-log
>```
>
>>[option]可选：
>>
>>​	--all 显示所有分支
>>​	--pretty=oneline 将提交信息显示为一行
>>​	--abbrev-commit 使得输出的commitId更简短
>>​	--graph 以图的形式显示  
>>
>>第二个指令，前面给它起了别名叫git-log
>
>![](img/git_Log.png)

##### 3.5.4、版本回退

>```html
>1、git reset --soft [commitID]
>2、git reset --hard [commitID]
>3、git reset --mixed [commitID]
>```
>
>>[commitID]：commitID 可以使用 git-log 或 git log 指令查看（上图中的哈希值）  
>>--soft：回退的时候，保留工作区和暂存区中的回退文件/目录
>>
>>--hard：回退的时候，删除工作区和暂存区中的回退文件/目录
>>
>>--mixed：回退的时候，保留工作区中的回退文件/目录，删除暂存区中的回退文件/目录
>
>![](img/git_Reset三种图示.png)

##### 3.5.5、查看所有操作记录（包括已经被删除的操作记录）

>```html
>git reflog
>```
>
>可以查看所有分支的所有操作记录（包括已经被删除的 commit 记录和 reset 的操作）

##### 3.5.6、查看仓库文件

>```html
>git ls-files
>```
>
>不带选项：默认情况下，git ls-files 列出所有已跟踪的文件，包括已修改但尚未暂存的文件。
>
>```html
>git ls-files -c
>```
>
>-c 或 --cached：只列出已经通过 git add 添加到暂存区的文件。
>
>```html
>git ls-files -o
>```
>
>-o 或 --others：只列出未跟踪的文件。
>
>```html
>git ls-files -s
>```
>
>-s 或 --stage：显示文件的状态信息，包括文件的模式(例如，100644 表示普通文件，100755 表示[可执行文件](https://so.csdn.net/so/search?q=可执行文件&spm=1001.2101.3001.7020))和 SHA-1 哈希值。
>
>```html
>git ls-files -t
>```
>
>-t：只列出已跟踪的文件。
>
>```html
>git ls-files -u
>```
>
>-u 或 --unmerged：只列出有合并冲突的文件。
>
>```html
>git ls-files -h
>```
>
>-h或者-help :列出其他选项

##### 3.5.7 、忽略文件

>可以在工作目录中创建一个名为 .gitignore 的文件（文件名称固定），列出要忽略的文件模式。  
>
>忽略文件模板
>
>``` .gitignore 
># no .a files 
># 忽略所有.a文件
>*.a
>
># but do track lib.a, even though you're ignoring .a files above
># 但跟踪所有的lib.a文件，即使你在前面忽略了所有.a文件
>!lib.a
>
># only ignore the TODO file in the current directory, not subdir/TODO
># 只忽略当前目录下的T0D0文件，而不忽略subdir/TODO 	
>/TODO
>
># ignore all files in the build/ directory
># 忽略任何目录下的build/ directory
>build/
>
># ignore doc/notes.txt, but not doc/server/arch.txt
># 忽略 doc/notes.txt，但是不忽略doc/server/arch.txt
>doc/*.txt
>
># ignore all .pdf files in the doc/ directory
># 忽略doc/目录及其所有子目录下的.pdf文件
>doc/**/*.pdf
>```
>
>[GitHub官方提供的 .gitignore 文件模板](https://github.com/github/gitignore?tab=readme-ov-file)
>
>忽略命令：
>
>```html
>忽略xx.x文件
>git update-index --assume-unchanged xx.x
>
>恢复跟踪该文件
>git update-index --no-assume-unchanged xx.x
>
>```
>
>>不会更改`.gitignore`文件的内容。

##### 3.5.8、查看差异

>```html
>git diff [options] [source1] [source2]
>```
>
>>source1 和 source2：
>>可以是提交哈希值、分支名、标签名等，用于指定要比较的两个版本的来源。如果不指定，则有不同的默认行为。
>>options：
>>	--staged或--cached：比较暂存区和上次提交之间的差异。
>>	--name-only：只显示发生变化的文件名，而不显示具体的差异内容。
>>	--name-status：显示发生变化的文件名以及变化的状态（A 表示添加、D 表示删除、M 表示修改）。
>>	-w或--ignore-all-space：忽略空白字符的差异。
>
>
>
>```html
>git diff  
>```
>
>这将显示自上次提交以来对所有文件所做的更改。
>
>```html
>git diff --staged
>```
>
>此命令显示已经添加到暂存区但还没有提交的更改（本地仓库）。
>
>```html
>git diff branch1 branch2
>```
>
>将显示 `branch1` 和 `branch2` 分支之间的差异。
>
>```html
>git diff --name-only
>```
>
>只显示发生变化的[文件名](https://so.csdn.net/so/search?q=文件名&spm=1001.2101.3001.7020)。
>
>```html
>git diff --name-status
>```
>
>比较特定提交之间的差异。
>
>```html
>git diff commitA commitB
>```
>
>这里 `commitA` 和 `commitB` 可以是提交哈希值、分支名或标签名等。
>
>```html
>git diff -U5 commitA commitB
>```
>
>此命令将显示 `commitA` 和 `commitB` 之间的差异，并设置 5 行上下文。默认显示3行上下文
>
>```html
>git diff HEAD~n HEAD
>```
>
>此命令将显示前n个版本与上版本的比较。
>
>![](img/git_Diff.png)

##### 3.5.9、删除文件

>```html
>git rm 
>```
>
>![](img/git_Rm.png)

#### 3.6、分支

##### 3.6.1、
