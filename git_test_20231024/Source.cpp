// ============================
// CL22
// ----------------------------
// ���C���pcpp
// ----------------------------
// main.cpp
// ============================

// --- �x���}�~ ---
#define  _CRT_SECURE_NO_WARNINGS


// --- �C���N���[�h�� ----
#include <iostream>
#include<crtdbg.h> // ���������[�N�`�F�b�N�p


// --- �萔��` ---

// --- �\���̐錾�� ---

// --- �O���[�o���錾�� ---

// --- �v���g�^�C�v�錾�� ---

using namespace std;

int main(void)
{
	// �v���O�����I�����Ƀ��������[�N���`�F�b�N����
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	std::cout << "Hello World!" << std::endl;
	std::cout << "Let's commit!" << std::endl;
	std::cout << "Now branch is develop!" << std::endl;
	return 0;

	// ���͑҂�
	cin.ignore(2, '\n');
	cin.get();
	return 0;
}