# C language Work Shop 01

repository dir tree
```
ClangWorkShop
└── 01
|   ├── Dockerfile
|   └── work_dir/
|       └── Tester/
|       └── hoge.c
└──README.md
```
# Introductions

## 実行環境の作成方法
1. ワークショップのrepositoryをclone
```
git clone https://github.com/WATA-Haru/ClangWorkShop.git
```
2. 01に移動
```
cd ClanWorkShop/01
```
3. 実行環境の作成
- [docker-compose](https://docs.docker.com/desktop/install/mac-install/)のアプリケーションを立ち上げてください。
- 以下のコマンドを入力(Cの実行環境をbuildして、work_dirをdocker内のhomeにマウントしている)
```
docker build -t alpine:exec-c .
docker run -v "$PWD"/work_dir:/home --rm -ti alpine:exec-c
```

実行例
```
6a333c246e82:# cd /home
6a333c246e82:# gcc welcome.c -o welcome
6a333c246e82:# ./welcome
Welcome to ClangWorkShop01. thank you !!
```

## 提出方法
1. 課題に合わせてディレクトリ作成 例: ```ex01```
2. Testerディレクトリに```ex01```をcopy
3. Testerディレクトリ内で以下のコマンドを入力
```
make test ex01
```
一気にテストする場合
```
make alltest
```

# コーディング規約
- 提出プログラムのmain関数はコメントアウトしなさい。
- 提出プログラムの関数名やディレクトリ名は、仕様書の通りでなければならない。
- コメントアウトするときはスラッシュ二つ```//```で書きなさい。(自作コードチェッカが/**/に非対応なため)
    - VsCodeなら、```Ctrl(Command) + /```で可能
- 提出用プログラムに以下の使用は**禁止**である。検出された場合、Testerは評価を行わない。
    - **for文**(while is ok)
    - switch-case文
    - define文
    - グローバル変数
    - 変数名にfor, define, switch-caseを含む文

# 1. welcome printf

|welcome_printf|
|---|
|提出するディレクトリ:ex01/|
|提出するファイル: welcome_printf.c|
|使用可能なライブラリ関数: printf|

以下の出力をする関数を書きなさい。提出時にmain関数はコメントアウトすること。(コーディング規約より)
```
A
B
C
welcome!
```

プロトタイプ例
```
void welcome_printf();
```

文字を標準出力に出力するためには、printf関数を使用すること。
```
printf("hogehogehogehoge");
```

# 2.  


# 2. Madam Alphabet, Dr num and Sir AtMark

Ascii, char , number , atMark /Asciiコードを触る。AtMarkの時だけ、変なアウトプットの処理をさせる

|Madam.Alphabet, Dr.num and Sir.AtMark|
|---|
||
||


```Hint
man Ascii
```

# 3. FizzBuzzをC言語で実装しよう。



# Q & A
**Q. なぜこのような問題なのですか？**

**A. プログラミングの基礎的な要素がすべて入っているからです。**   
すべての処理は順次実行・条件分岐・繰り返しに抽象化されます。そのため、これらを扱う問題文にしました。


**Q. for文が使えないだって!ふざけるな!!**   

**A. ふざけていません。バグを見つけることと、きれいなコードを書くことに慣れてほしいのです。**   
while文を使うと、あなたはさんざんなエラーに出くわすことでしょう。   
例えば、ループカウンタの初期化忘れだったり、インクリメント忘れだったり...。   
しかし、意地悪をしよう、課題の難易度を上げようというわけではありません。こういったバグに出くわすと、あなたはgdbなどのデバッグツールを使ったり、コードをよりシンプルに書いてミスを繰り返さないように考えることでしょう。こういった経験が積めると思うのでforではなくwhileを強要します。

**Q. 他にも使えないものがあるけどそれはどうしてですか？**   

**A. for以外は、できれば使わない方が良いもの達だからです。**   
たとえば、グローバル変数はどこからでも変更できてしまうので、コードの保守性を損ねます。
