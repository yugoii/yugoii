/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
	/**名前をつけて数字を保存しとく**/
	int ichigo = 4;
	/**printfは""の間に表記したい文字を書く**/
	printf("子供が%d人いる。",ichigo);
	ichigo = ichigo/2 ;
	printf("\n.....しかし、戦争で子供が%d人になった。",ichigo);
	
	return 0;
}
