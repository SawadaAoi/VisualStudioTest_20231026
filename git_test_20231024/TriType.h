//TriType.h
//同じ型を３つ持つテンプレートクラスを定義

//＞更新日時
//2023/10/26	制作
//2023/10/31	継承に対応・コメント修正・べき乗追加



//＞インクルードガード
#ifndef ___TRI_TYPE_H___
#define ___TRI_TYPE_H___

#include <math.h>

//＞テンプレートクラス定義
template<class TriType>
class TTriType	//テンプレートクラス：同じ型の変数３つ
{
public:
	//＞変数宣言
	TriType x;	//１つめの変数
	TriType y;	//２つめの変数
	TriType z;	//３つめの変数
	//＞プロトタイプ宣言
	TTriType();											//コンストラクタ
	TTriType(TriType x, TriType y, TriType z);			//引数付きコンストラクタ
	TTriType(TTriType& Obj);							//コピーコンストラクタ
	virtual ~TTriType();								//デストラクタ
	virtual TTriType& operator=(const TTriType& Obj);	//"="演算子のオーバーロード
	virtual TTriType operator+(const TTriType& Obj);	//"+"演算子のオーバーロード
	virtual TTriType& operator+=(const TTriType& Obj);	//"+="演算子のオーバーロード
	virtual TTriType operator-(const TTriType& Obj);	//"-"演算子のオーバーロード
	virtual TTriType& operator-=(const TTriType& Obj);	//"-="演算子のオーバーロード
	virtual TTriType operator*(const TTriType& Obj);	//"*"演算子のオーバーロード
	virtual TTriType& operator*=(const TTriType& Obj);	//"*="演算子のオーバーロード
	virtual TTriType operator/(const TTriType& Obj);	//"/"演算子のオーバーロード
	virtual TTriType& operator/=(const TTriType& Obj);	//"/="演算子のオーバーロード
	virtual TTriType operator%(const TTriType& Obj);	//"%"演算子のオーバーロード
	virtual TTriType& operator%=(const TTriType& Obj);	//"%="演算子のオーバーロード
	virtual TTriType operator^(float Index);			//"^"演算子のオーバーロード
};	//型テンプレート



/////
//＞コンストラクタ
//引数：なし
//戻り値：なし
//概要：生成時に行う処理
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType>::TTriType()
	:TTriType((TriType)0, (TriType)0, (TriType)0)	//委譲
{
}

/////
//＞コンストラクタ
//引数１：TriType x
//引数２：TriType y
//引数３：TriType z
//戻り値：なし
//概要：生成時に行う処理
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType>::TTriType(TriType x, TriType y, TriType z)
{
	//＞初期化
	this->x = x;	//１つめ初期化
	this->y = y;	//２つめ初期化
	this->z = z;	//３つめ初期化
}

/////
//＞コピーコンストラクタ
//引数：TTriType & Obj：複製するデータ元
//戻り値：なし
//概要：コピー時に行う処理
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType>::TTriType(TTriType & Obj)
{
	//＞複製
	this->x = Obj.x;	//１つめのデータコピー
	this->y = Obj.y;	//２つめのデータコピー
	this->z = Obj.z;	//３つめのデータコピー
}

/////
//＞デストラクタ
//引数：なし
//戻り値：なし
//概要：破棄時に行う処理
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType>::~TTriType()
{
}

/////
//＞代入演算子
//引数：const TTriType & Obj：代入する値の参照
//戻り値：代入が行われた自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに代入処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType>& TTriType<TriType>::operator=(const TTriType & Obj)
{
	//＞複製
	this->x = Obj.x;	//１つめのデータコピー
	this->y = Obj.y;	//２つめのデータコピー
	this->z = Obj.z;	//３つめのデータコピー

	//＞提供
	return	*this;	//自身の参照
}

/////
//＞加算演算子
//引数：const TTriType & Obj：加算する値の参照
//戻り値：自身と引数の加算結果
//概要：独立した３つのメンバー変数に対してそれぞれに加算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator+(const TTriType & Obj)
{
	//＞提供
	return { this->x + Obj.x, this->y + Obj.y, this->z + Obj.z };	//加算結果
}

/////
//＞加算代入演算子
//引数：const TTriType & Obj：加算する値の参照
//戻り値：引数が加算された自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに加算処理を行ったものを代入する
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> & TTriType<TriType>::operator+=(const TTriType & Obj)
{
	//＞提供
	return (*this = *this + Obj);	//３つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞減算演算子
//引数：const TTriType & Obj：減算する値の参照
//戻り値：自身 - 引数の結果
//概要：独立した３つのメンバー変数に対してそれぞれに減算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator-(const TTriType & Obj)
{
	//＞提供
	return { this->x - Obj.x, this->y - Obj.y, this->z - Obj.z };	//減算結果
}

/////
//＞減算代入演算子
//引数：const TTriType & Obj：減算する値の参照
//戻り値：引数が減算された自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに減算処理を行ったものを代入する
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> & TTriType<TriType>::operator-=(const TTriType & Obj)
{
	//＞提供
	return (*this = *this - Obj);	//３つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞乗算演算子
//引数：const TTriType & Obj：乗算する値の参照
//戻り値：自身と引数の乗算結果
//概要：独立した３つのメンバー変数に対してそれぞれに乗算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator*(const TTriType & Obj)
{
	//＞提供
	return { this->x * Obj.x, this->y * Obj.y, this->z * Obj.z };	//乗算結果
}

/////
//＞乗算代入演算子
//引数：const TTriType & Obj：乗算する値の参照
//戻り値：引数が乗算された自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに乗算処理を行ったものを代入する
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> & TTriType<TriType>::operator*=(const TTriType & Obj)
{
	//＞提供
	return (*this = *this * Obj);	//３つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞除算演算子
//引数：const TTriType & Obj：除算する値の参照
//戻り値：自身 / 引数の結果
//概要：独立した３つのメンバー変数に対してそれぞれに除算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator/(const TTriType & Obj)
{
	//＞提供
	return { this->x / Obj.x, this->y / Obj.y, this->z / Obj.z };	//除算結果
}

/////
//＞除算代入演算子
//引数：const TTriType & Obj：除算する値の参照
//戻り値：引数が除算された自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに除算処理を行ったものを代入する
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> & TTriType<TriType>::operator/=(const TTriType & Obj)
{
	//＞提供
	return (*this = *this / Obj);	//３つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞剰余演算演算子
//引数：const TTriType & Obj：剰余演算する値の参照
//戻り値：自身と引数の剰余演算結果
//概要：独立した３つのメンバー変数に対してそれぞれに剰余演算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator%(const TTriType & Obj)
{
	//＞提供
	return { this->x % Obj.x, this->y % Obj.y, this->z % Obj.z };	//剰余演算結果
}

/////
//＞剰余演算代入演算子
//引数：const TTriType & Obj：剰余演算する値の参照
//戻り値：引数が剰余演算された自分自身
//概要：独立した３つのメンバー変数に対してそれぞれに剰余演算処理を行ったものを代入する
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> & TTriType<TriType>::operator%=(const TTriType & Obj)
{
	//＞提供
	return (*this = *this % Obj);	//３つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞べき乗演算子
//引数：TriType Index：指数
//戻り値：自身を引数でべき乗した演算結果
//概要：独立した３つのメンバー変数に対してそれぞれにべき乗演算処理を行う
/////
template<class TriType>	//テンプレート関数実装
TTriType<TriType> TTriType<TriType>::operator^(float Index)
{
	//＞提供
	return{ pow(this->x, Index), pow(this->y, Index), pow(this->z, Index) };	//べき乗演算結果
}

#endif // !___TRI_TYPE_H___



//--- ここから下は試運転(cppにかかないと動かないので、試したい場合このヘッダをallコピーしてcppに貼り付けてください) ---//
	//！： 既存のmain関数がある場合は別プロジェクトで試すか、一時的にコメントアウトしてください。
//#include <iostream>
//#include <string>
//
//int main()
//{
//	TTriType<int> a;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//0,0,0のハズ
//
//	a = TTriType<int>(1, 1, 1);
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
//	TTriType<int> b(4, 4, 4);
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