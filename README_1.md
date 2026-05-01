<!-- # ft_printf

##　　可変長引数

## 設計
printf(const char *format, ...);

###　全体
まずはformatを読み取る
%が出てきたら次の文字を読み取って、変換指定子が何かを読み取る
今回実装する変換指定子は全て%の後ろは一文字
→％とその後の１文字のみ変換指定子として認識

変換指定子以外の文字は普通に出力
変換指定子登場すると、関数に飛んでその部分だけ表示してまた戻ってくる
変換指定子ごとに関数を用意して分岐させる

### 変換指定子部分の出力
先にformatに登場する%の数をカウント=count
構造体（中にunion）であるkeyを作成
key [count]; 
va_list ap;
va_start (ap, format);
while()
{
	key = va_arg (ap, type);
}
va_end

## about　structure and union
typedef struct s_data
{
	int	type; //変換指定子ごとに整数を割り当てる
	union u_type
	{
		int d;
		char c;
		cahr *s;
		など...
	}
}	data; -->

## 構造
formatを一文字ずつ読み取る
	%が出てきた場合、
		次の文字が%
			%を出力
			indexを２増やす
		それ以外
			apを呼び出す
			関数（-a）に飛んで出力
			indexを２増やす
	それ以外の場合
		普通に文字を出力

(-a)
va_arg (ap, 型)で取得
それをそれぞれの型に合わせた方法で出力

## 変換指定子
### %c
prints a single number
printed by putchar

### %s
prints a string
printed by putstr

### %p
the void * pointer must be printed in hexadecimal format
アドレスは単なる数値の情報
∴unsigned int addr = (unsigned int)&aで取得可能
get the addres by ??? and printed by putnbr_base

### %d
prints a decimal number
putnbr

### %i
prints an integer in base 10
%d and %i is completely identical
putnbr

### %u
prints an unsigned decimal (base 10) number
abs and putnbr

### %x
prints a number in hexadecimal (base 16) lowercase format
putnbr_base

### %X
prints a number in hexadecimal (base 16) upper case fomrmat
putnbr_base

### %%
prints a percent sign

## structure
ft_printf(const char *format, ...)
	putchar(char c)
	print_c(va_list *ap)
		puchar(char c)
	print_s(va_list *ap)
		putstr(char *str)
	print_p(va_list *ap) 
		putnbr_base(int n, char *base)
	print_d_i(va_list *ap)
		putnbr_base(int n, char *base)
	print_u(va_list *ap)
		putnbr_base(int n, char *base)
	print_x(va_list *ap)
		putnbr_base(int n, char *base)
	print_X(va_list *ap)
		putnbr_base(int n, char *base)
	print_persent(void)

##　考察



this prpject has been created as part of 42 currculam 



