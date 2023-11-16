# C language Work Shop 01

**あなたは苦しむだろう、しかし、その分大いなる力がつくだろう**

repository dir tree
```
ClangWorkShop
└── 01
|   ├── Dockerfile
|   └── work_dir/
|       └── Tester/
|       └── welcome_workshop.c
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
docker run -v "$PWD"/work_dir:/home --rm -ti alpine:exec-c /bin/bash
```

実行例
```
6a333c246e82:# cd /home
6a333c246e82:# gcc welcome_workshop.c
6a333c246e82:# ./a.out
Welcome to ClangWorkShop01. thank you !!
```

## コーディング規約
- 提出プログラムのmain関数はコメントアウトしなさい。
- コメントアウトするときはスラッシュ二つ```//```で書きなさい。(自作コードチェッカが/**/に非対応なため)
    - VsCodeなら、```Ctrl(Command) + /```で可能
- 提出プログラムの関数名やディレクトリ名は、仕様書の通りでなければならない。
- 提出用プログラムに以下の使用は**禁止**である。検出された場合、Testerは評価を行わない。
    - **for文**(while is ok)
    - switch-case文
    - define文
    - グローバル変数
    - 変数名にfor, define, switch-caseを含む文

## 提出方法
1. 課題に合わせてディレクトリ作成 例: ```ex01```
2. Testerディレクトリに```ex01```をcopy
3. Testerディレクトリ内で以下のコマンドを入力

unit test
```
make test01
make test02
make test03
```

all test
```
make all
```

remove executable file
```
make clean
```

remove all output file including ex01.txt, ex02.txt ex03.txt)
```
make fclean
```

# Questions
## 1. Plus five machine
|Plus five machine|
|---|
|提出するディレクトリ:ex01/|
|提出するファイル: plus_five.c|
|提出ファイルに使用可能な関数: |

- 天才博士は、値を入れたら必ず**プラス5されて値が返ってくる**装置を開発した。
- 0を入れても、-1000を入れてもできるというのだから驚きだ。君には作れるだろうか？

プロトタイプ例
```
int plus_five(int num);
```

注意
- チェックにmain関数を作るのを推奨する。しかし、提出時にmain関数はコメントアウトすること。(コーディング規約より)
- オーバーフローやアンダーフローの処理には対応しなくてよい。

## 2. welcome printf

|welcome printf|
|---|
|提出するディレクトリ:ex02/|
|提出するファイル: welcome_printf.c|
|提出ファイルに使用可能な関数: printf|

- 以下の出力をする関数を書きなさい。提出時にmain関数はコメントアウトすること。(コーディング規約より)
```
A
B
C
"" welcome! ""
```

- 文字を標準出力に出力するためには、printf関数を使用すること。
- "(ダブルクォーテーション)も出力に含めること
- Testerは、welcome_printf関数を一回のみ実行して上記の出力を期待する

プロトタイプ例
```
void welcome_printf(void);
```

## 3. Madam Alphabet, Dr Num and Sir AtMark

|Sir.AtMark, Dr.num and Madam.Alphabet|
|---|
|提出するディレクトリ:ex03/|
|提出するファイル: ascii_town.c|
|提出ファイルに使用可能な関数: printf|

- Ascii Townには、3人の変人が住んでいることで有名だ。
- Sir.AtMark, Dr.Num, Madam.Alphabetである。
- 彼らは、特定のAscii文字を愛しており、それが出たときだけ反応するという。
- コードは出力と同じようにすること

**1人目 Sir.AtMark**
- Asciiコードで、```@```が出た場合のみ以下の出力をする。
```
Sir.AtMark "@ is my life."
```

**2人目 Dr.Num**
- Asciiコードで、数字が出たときのみ以下の出力をする。
```
Dr.Num "I love ascii number."
```

**3人目 Madam.Alphabet**
- 一番のボスだ。
- Asciiコードで、大文字、小文字のアルファベットが出たときのみ以下の出力をする。
- <current Alphabet>には、現在のアルファベットを出力すること
```
Madam.Alphabet "<current Alphabet> is one of the most beautiful Alphabet!!"
```

プロトタイプ例
```
void ascii_town(void);
```

出力は、Asciiコードから順に、全て以下のようにすること。スペースの数等が間違っていた場合はエラーとして判定されるので気を付けること
```
7: Dr.Num "I love ascii number."
8: Dr.Num "I love ascii number."
9: Dr.Num "I love ascii number."
::
;:
<:
=:
>:
?:
@: Sir.AtMark "@ is my life."
A: Madam.Alphabet "A is one of the most beautiful Alphabet!!"
B: Madam.Alphabet "B is one of the most beautiful Alphabet!!"
```

ヒント: 

- この街には、頼れる男が一人いる。manコマンドを使って話を聞いてみよう。
```
man Ascii
```
- Ascii 型キャスト

# Clearだ、おめでとう

## 次回予告
### multiple FizzBuzz

|FizzBuzz|
|---|
|提出するディレクトリ: Coming Soon...|
|提出するファイル: Coming Soon...|
|使用可能なライブラリ関数: printf|
-  1000までに対応するfizzbuzz
-  変更可能性があります

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
