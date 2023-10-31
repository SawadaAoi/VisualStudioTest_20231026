//DiType.h
//同じ型を２つ持つテンプレートクラスを定義

//＞更新日時
//2023/10/26	制作
//2023/10/31	継承に対応・コメント修正



//＞インクルードガード
#ifndef ___DI_TYPE_H___
#define ___DI_TYPE_H___

//＞テンプレートクラス定義
template<class DiType>
class TDiType	//テンプレートクラス：同じ型の変数２つ
{
public:
	//＞変数宣言
	DiType x;	//１つめの変数
	DiType y;	//２つめの変数
	//＞プロトタイプ宣言
	TDiType();											//コンストラクタ
	TDiType(DiType x, DiType y);						//引数付きコンストラクタ
	TDiType(TDiType& Obj);								//コピーコンストラクタ
	virtual ~TDiType();									//デストラクタ
	virtual TDiType& operator=(const TDiType& Obj);		//"="演算子のオーバーロード
	virtual TDiType operator+(const TDiType& Obj);		//"+"演算子のオーバーロード
	virtual TDiType& operator+=(const TDiType& Obj);	//"+="演算子のオーバーロード
	virtual TDiType operator-(const TDiType& Obj);		//"-"演算子のオーバーロード
	virtual TDiType& operator-=(const TDiType& Obj);	//"-="演算子のオーバーロード
	virtual TDiType operator*(const TDiType& Obj);		//"*"演算子のオーバーロード
	virtual TDiType& operator*=(const TDiType& Obj);	//"*="演算子のオーバーロード
	virtual TDiType operator/(const TDiType& Obj);		//"/"演算子のオーバーロード
	virtual TDiType& operator/=(const TDiType& Obj);	//"/="演算子のオーバーロード
	virtual TDiType operator%(const TDiType& Obj);		//"%"演算子のオーバーロード
	virtual TDiType& operator%=(const TDiType& Obj);	//"%="演算子のオーバーロード
};	//型テンプレート



/////
//＞コンストラクタ
//引数：なし
//戻り値：なし
//概要：生成時に行う処理
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType>::TDiType()
	:TDiType((DiType)0, (DiType)0)	//委譲
{
}

/////
//＞コンストラクタ
//引数１：DiType x
//引数２：DiType y
//戻り値：なし
//概要：生成時に行う処理
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType>::TDiType(DiType x, DiType y)
{
	//＞初期化
	this->x = x;	//１つめ初期化
	this->y = y;	//２つめ初期化
}

/////
//＞コピーコンストラクタ
//引数：TDiType & Obj：複製するデータ元
//戻り値：なし
//概要：コピー時に行う処理
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType>::TDiType(TDiType & Obj)
{
	//＞複製
	this->x = Obj.x;	//１つめのデータコピー
	this->y = Obj.y;	//２つめのデータコピー
}

/////
//＞デストラクタ
//引数：なし
//戻り値：なし
//概要：破棄時に行う処理
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType>::~TDiType()
{
}

/////
//＞代入演算子
//引数：const TDiType & Obj：代入する値の参照
//戻り値：代入が行われた自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに代入処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType>& TDiType<DiType>::operator=(const TDiType & Obj)
{
	//＞複製
	this->x = Obj.x;	//１つめのデータコピー
	this->y = Obj.y;	//２つめのデータコピー

	//＞提供
	return	*this;	//自身の参照
}

/////
//＞加算演算子
//引数：const TDiType & Obj：加算する値の参照
//戻り値：自身と引数の加算結果
//概要：独立した２つのメンバー変数に対してそれぞれに加算処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> TDiType<DiType>::operator+(const TDiType & Obj)
{
	//＞提供
	return { this->x + Obj.x, this->y + Obj.y };	//加算結果
}

/////
//＞加算代入演算子
//引数：const TDiType & Obj：加算する値の参照
//戻り値：引数が加算された自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに加算処理を行ったものを代入する
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> & TDiType<DiType>::operator+=(const TDiType & Obj)
{
	//＞提供
	return (*this = *this + Obj);	//２つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞減算演算子
//引数：const TDiType & Obj：減算する値の参照
//戻り値：自身 - 引数の結果
//概要：独立した２つのメンバー変数に対してそれぞれに減算処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> TDiType<DiType>::operator-(const TDiType & Obj)
{
	//＞提供
	return { this->x - Obj.x, this->y - Obj.y };	//減算結果
}

/////
//＞減算代入演算子
//引数：const TDiType & Obj：減算する値の参照
//戻り値：引数が減算された自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに減算処理を行ったものを代入する
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> & TDiType<DiType>::operator-=(const TDiType & Obj)
{
	//＞提供
	return (*this = *this - Obj);	//２つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞乗算演算子
//引数：const TDiType & Obj：乗算する値の参照
//戻り値：自身と引数の乗算結果
//概要：独立した２つのメンバー変数に対してそれぞれに乗算処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> TDiType<DiType>::operator*(const TDiType & Obj)
{
	//＞提供
	return { this->x * Obj.x, this->y * Obj.y };	//乗算結果
}

/////
//＞乗算代入演算子
//引数：const TDiType & Obj：乗算する値の参照
//戻り値：引数が乗算された自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに乗算処理を行ったものを代入する
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> & TDiType<DiType>::operator*=(const TDiType & Obj)
{
	//＞提供
	return (*this = *this * Obj);	//２つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞除算演算子
//引数：const TDiType & Obj：除算する値の参照
//戻り値：自身 / 引数の結果
//概要：独立した２つのメンバー変数に対してそれぞれに除算処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> TDiType<DiType>::operator/(const TDiType & Obj)
{
	//＞提供
	return { this->x / Obj.x, this->y / Obj.y };	//除算結果
}

/////
//＞除算代入演算子
//引数：const TDiType & Obj：除算する値の参照
//戻り値：引数が除算された自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに除算処理を行ったものを代入する
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> & TDiType<DiType>::operator/=(const TDiType & Obj)
{
	//＞提供
	return (*this = *this / Obj);	//２つの実装済演算子を使用して処理を行い、自身の参照を返す
}

/////
//＞剰余演算演算子
//引数：const TDiType & Obj：剰余演算する値の参照
//戻り値：自身と引数の剰余演算結果
//概要：独立した２つのメンバー変数に対してそれぞれに剰余演算処理を行う
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> TDiType<DiType>::operator%(const TDiType & Obj)
{
	//＞提供
	return { this->x % Obj.x, this->y % Obj.y };	//剰余演算結果
}

/////
//＞剰余演算代入演算子
//引数：const TDiType & Obj：剰余演算する値の参照
//戻り値：引数が剰余演算された自分自身
//概要：独立した２つのメンバー変数に対してそれぞれに剰余演算処理を行ったものを代入する
/////
template<class DiType>	//テンプレート関数実装
TDiType<DiType> & TDiType<DiType>::operator%=(const TDiType & Obj)
{
	//＞提供
	return (*this = *this % Obj);	//２つの実装済演算子を使用して処理を行い、自身の参照を返す
}

#endif // !___DI_TYPE_H___



//--- ここから下は試運転(cppにかかないと動かないので、試したい場合このヘッダをallコピーしてcppに貼り付けてください) ---//
	//！： 既存のmain関数がある場合は別プロジェクトで試すか、一時的にコメントアウトしてください。
//#include <iostream>
//#include <string>
//
//int main()
//{
//	TDiType<int> a;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//0,0のハズ
//
//	a = TDiType<int>(1, 1);
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;
//
//	a = { 2, 2 };
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;
//
//	a.x = 3;
//	a.y = 3;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;
//
//	TDiType<int> b(4, 4);
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;
//
//	a + b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//3,3のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4のハズ
//
//	a = b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//4,4のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4のハズ
//
//	a += b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//8,8のハズ
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4のハズ
//	std::cin.get();
//
//
//	return 0;
//}