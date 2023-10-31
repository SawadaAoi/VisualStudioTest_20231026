//Pos.h
//位置座標を管理するテンプレートクラスを定義

//＞更新日時
//2023/10/31	制作



//＞インクルードガード
#ifndef ___POS_H___
#define ___POS_H___

//＞インクルード部
#include "TriType.h"	//３つの同じ型を持つ型

//＞テンプレートクラス定義
template<class Pos>
class TPos	:public TTriType<Pos>	//テンプレートクラス：位置
{
public:
	//＞プロトタイプ宣言
	TPos();								//コンストラクタ
	TPos(Pos x, Pos y, Pos z);			//引数付きコンストラクタ
	TPos(TPos& Obj);					//コピーコンストラクタ
	~TPos();							//デストラクタ
	Pos Distance(const TPos& Obj);		//距離計算
};	//型テンプレート



/////
//＞コンストラクタ
//引数：なし
//戻り値：なし
//概要：生成時に行う処理
/////
template<class Pos>	//テンプレート関数実装
TPos<Pos>::TPos()
{
}

/////
//＞コンストラクタ
//引数１：Pos x
//引数２：Pos y
//引数３：Pos z
//戻り値：なし
//概要：生成時に行う処理
/////
template<class Pos>	//テンプレート関数実装
TPos<Pos>::TPos(Pos x, Pos y, Pos z)
	:TTriType<Pos>(x, y, z)	//委譲
{
}

/////
//＞コピーコンストラクタ
//引数：TPos & Obj：複製するデータ元
//戻り値：なし
//概要：コピー時に行う処理
/////
template<class Pos>	//テンプレート関数実装
TPos<Pos>::TPos(TPos & Obj)
	:TTriType<Pos>(Obj)
{
}

/////
//＞デストラクタ
//引数：なし
//戻り値：なし
//概要：破棄時に行う処理
/////
template<class Pos>	//テンプレート関数実装
TPos<Pos>::~TPos()
{
}

/////
//＞距離計算
//引数：const TPos & Obj：距離を求める値の参照
//戻り値：自身と引数の距離
//概要：二点の位置情報をもとに距離を求める
/////
template<class Pos>	//テンプレート関数実装
Pos TPos<Pos>::Distance(const TPos & Obj)
{
	//＞提供
	return (Pos)(Obj.x ^ 2 + Obj.y ^ 2 + Obj.z ^ 2)^ 0.5);	//計算結果
}
#endif // !___POS_H___



//--- ここから下は試運転(cppにかかないと動かないので、試したい場合このヘッダをallコピーしてcppに貼り付けてください) ---//
	//！： 既存のmain関数がある場合は別プロジェクトで試すか、一時的にコメントアウトしてください。
//#include <iostream>
//#include <string>
//
//int main()
//{
//	TPos<int> a;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//0,0,0のハズ
//
//	a = TPos<int>(1, 1, 1);
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;
//
//	a = { 2, 2, 2 };
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;
//
//	a.x = 3;
//	a.y = 3;
//	a.z = 3;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;
//
//	TPos<int> b(4, 4, 4);
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;
//
//	a + b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//3,3,3のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4のハズ
//
//	a = b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//4,4,4のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4のハズ
//
//	a += b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//8,8,8のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4のハズ
//	std::cin.get();
//
//
//	return 0;
//}