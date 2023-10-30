// ============================
// CL22
// ----------------------------
// メイン用cpp
// ----------------------------
// main.cpp
// ============================

// --- 警告抑止 ---
#define  _CRT_SECURE_NO_WARNINGS


// --- インクルード部 ----
#include <iostream>
#include<crtdbg.h> // メモリリークチェック用


// --- 定数定義 ---

// --- 構造体宣言部 ---

// --- グローバル宣言部 ---

// --- プロトタイプ宣言部 ---

using namespace std;

int main(void)
{
	// プログラム終了時にメモリリークをチェックする
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::cout << "Hello World!" << std::endl;
	std::cout << "Let's commit!" << std::endl;
	std::cout << "Now branch is develop!" << std::endl;
	std::cout << "Now branch is master!" << std::endl;
	std::cout << "Testコメント20231028!" << std::endl;
	std::cout << "Testコメント20231028②!" << std::endl;
	std::cout << "Testコメント20231029!" << std::endl;
	std::cout << "正しいコミット" << std::endl;
	std::cout << "featureB" << std::endl;
	// 入力待ち
	cin.ignore(2, '\n');
	cin.get();
	return 0;
}