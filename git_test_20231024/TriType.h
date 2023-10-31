//TriType.h
//�����^���R���e���v���[�g�N���X���`

//���X�V����
//2023/10/26	����
//2023/10/31	�p���ɑΉ��E�R�����g�C���E�ׂ���ǉ�



//���C���N���[�h�K�[�h
#ifndef ___TRI_TYPE_H___
#define ___TRI_TYPE_H___

#include <math.h>

//���e���v���[�g�N���X��`
template<class TriType>
class TTriType	//�e���v���[�g�N���X�F�����^�̕ϐ��R��
{
public:
	//���ϐ��錾
	TriType x;	//�P�߂̕ϐ�
	TriType y;	//�Q�߂̕ϐ�
	TriType z;	//�R�߂̕ϐ�
	//���v���g�^�C�v�錾
	TTriType();											//�R���X�g���N�^
	TTriType(TriType x, TriType y, TriType z);			//�����t���R���X�g���N�^
	TTriType(TTriType& Obj);							//�R�s�[�R���X�g���N�^
	virtual ~TTriType();								//�f�X�g���N�^
	virtual TTriType& operator=(const TTriType& Obj);	//"="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator+(const TTriType& Obj);	//"+"���Z�q�̃I�[�o�[���[�h
	virtual TTriType& operator+=(const TTriType& Obj);	//"+="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator-(const TTriType& Obj);	//"-"���Z�q�̃I�[�o�[���[�h
	virtual TTriType& operator-=(const TTriType& Obj);	//"-="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator*(const TTriType& Obj);	//"*"���Z�q�̃I�[�o�[���[�h
	virtual TTriType& operator*=(const TTriType& Obj);	//"*="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator/(const TTriType& Obj);	//"/"���Z�q�̃I�[�o�[���[�h
	virtual TTriType& operator/=(const TTriType& Obj);	//"/="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator%(const TTriType& Obj);	//"%"���Z�q�̃I�[�o�[���[�h
	virtual TTriType& operator%=(const TTriType& Obj);	//"%="���Z�q�̃I�[�o�[���[�h
	virtual TTriType operator^(float Index);			//"^"���Z�q�̃I�[�o�[���[�h
};	//�^�e���v���[�g



/////
//���R���X�g���N�^
//�����F�Ȃ�
//�߂�l�F�Ȃ�
//�T�v�F�������ɍs������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType>::TTriType()
	:TTriType((TriType)0, (TriType)0, (TriType)0)	//�Ϗ�
{
}

/////
//���R���X�g���N�^
//�����P�FTriType x
//�����Q�FTriType y
//�����R�FTriType z
//�߂�l�F�Ȃ�
//�T�v�F�������ɍs������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType>::TTriType(TriType x, TriType y, TriType z)
{
	//��������
	this->x = x;	//�P�ߏ�����
	this->y = y;	//�Q�ߏ�����
	this->z = z;	//�R�ߏ�����
}

/////
//���R�s�[�R���X�g���N�^
//�����FTTriType & Obj�F��������f�[�^��
//�߂�l�F�Ȃ�
//�T�v�F�R�s�[���ɍs������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType>::TTriType(TTriType & Obj)
{
	//������
	this->x = Obj.x;	//�P�߂̃f�[�^�R�s�[
	this->y = Obj.y;	//�Q�߂̃f�[�^�R�s�[
	this->z = Obj.z;	//�R�߂̃f�[�^�R�s�[
}

/////
//���f�X�g���N�^
//�����F�Ȃ�
//�߂�l�F�Ȃ�
//�T�v�F�j�����ɍs������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType>::~TTriType()
{
}

/////
//��������Z�q
//�����Fconst TTriType & Obj�F�������l�̎Q��
//�߂�l�F������s��ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɑ���������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType>& TTriType<TriType>::operator=(const TTriType & Obj)
{
	//������
	this->x = Obj.x;	//�P�߂̃f�[�^�R�s�[
	this->y = Obj.y;	//�Q�߂̃f�[�^�R�s�[
	this->z = Obj.z;	//�R�߂̃f�[�^�R�s�[

	//����
	return	*this;	//���g�̎Q��
}

/////
//�����Z���Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���g�ƈ����̉��Z����
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɉ��Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator+(const TTriType & Obj)
{
	//����
	return { this->x + Obj.x, this->y + Obj.y, this->z + Obj.z };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɉ��Z�������s�������̂�������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> & TTriType<TriType>::operator+=(const TTriType & Obj)
{
	//����
	return (*this = *this + Obj);	//�R�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//�����Z���Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���g - �����̌���
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��Ɍ��Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator-(const TTriType & Obj)
{
	//����
	return { this->x - Obj.x, this->y - Obj.y, this->z - Obj.z };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��Ɍ��Z�������s�������̂�������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> & TTriType<TriType>::operator-=(const TTriType & Obj)
{
	//����
	return (*this = *this - Obj);	//�R�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//����Z���Z�q
//�����Fconst TTriType & Obj�F��Z����l�̎Q��
//�߂�l�F���g�ƈ����̏�Z����
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator*(const TTriType & Obj)
{
	//����
	return { this->x * Obj.x, this->y * Obj.y, this->z * Obj.z };	//��Z����
}

/////
//����Z������Z�q
//�����Fconst TTriType & Obj�F��Z����l�̎Q��
//�߂�l�F��������Z���ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�Z�������s�������̂�������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> & TTriType<TriType>::operator*=(const TTriType & Obj)
{
	//����
	return (*this = *this * Obj);	//�R�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//�����Z���Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���g / �����̌���
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ��Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator/(const TTriType & Obj)
{
	//����
	return { this->x / Obj.x, this->y / Obj.y, this->z / Obj.z };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TTriType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ��Z�������s�������̂�������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> & TTriType<TriType>::operator/=(const TTriType & Obj)
{
	//����
	return (*this = *this / Obj);	//�R�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//����]���Z���Z�q
//�����Fconst TTriType & Obj�F��]���Z����l�̎Q��
//�߂�l�F���g�ƈ����̏�]���Z����
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�]���Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator%(const TTriType & Obj)
{
	//����
	return { this->x % Obj.x, this->y % Obj.y, this->z % Obj.z };	//��]���Z����
}

/////
//����]���Z������Z�q
//�����Fconst TTriType & Obj�F��]���Z����l�̎Q��
//�߂�l�F��������]���Z���ꂽ�������g
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�]���Z�������s�������̂�������
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> & TTriType<TriType>::operator%=(const TTriType & Obj)
{
	//����
	return (*this = *this % Obj);	//�R�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//���ׂ��扉�Z�q
//�����FTriType Index�F�w��
//�߂�l�F���g�������łׂ��悵�����Z����
//�T�v�F�Ɨ������R�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɂׂ��扉�Z�������s��
/////
template<class TriType>	//�e���v���[�g�֐�����
TTriType<TriType> TTriType<TriType>::operator^(float Index)
{
	//����
	return{ pow(this->x, Index), pow(this->y, Index), pow(this->z, Index) };	//�ׂ��扉�Z����
}

#endif // !___TRI_TYPE_H___



//--- �������牺�͎��^�](cpp�ɂ����Ȃ��Ɠ����Ȃ��̂ŁA���������ꍇ���̃w�b�_��all�R�s�[����cpp�ɓ\��t���Ă�������) ---//
	//�I�F ������main�֐�������ꍇ�͕ʃv���W�F�N�g�Ŏ������A�ꎞ�I�ɃR�����g�A�E�g���Ă��������B
//#include <iostream>
//#include <string>
//
//int main()
//{
//	TTriType<int> a;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//0,0,0�̃n�Y
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
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//3,3,3�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4�̃n�Y
//
//	a = b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//4,4,4�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4�̃n�Y
//
//	a += b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << "," << std::to_string(a.z) << std::endl;	//8,8,8�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << "," << std::to_string(b.z) << std::endl;	//4,4,4�̃n�Y
//	std::cin.get();
//
//
//	return 0;
//}