//DiType.h
//�����^���Q���e���v���[�g�N���X���`

//���X�V����
//2023/10/26	����
//2023/10/31	�p���ɑΉ��E�R�����g�C��



//���C���N���[�h�K�[�h
#ifndef ___DI_TYPE_H___
#define ___DI_TYPE_H___

//���e���v���[�g�N���X��`
template<class DiType>
class TDiType	//�e���v���[�g�N���X�F�����^�̕ϐ��Q��
{
public:
	//���ϐ��錾
	DiType x;	//�P�߂̕ϐ�
	DiType y;	//�Q�߂̕ϐ�
	//���v���g�^�C�v�錾
	TDiType();											//�R���X�g���N�^
	TDiType(DiType x, DiType y);						//�����t���R���X�g���N�^
	TDiType(TDiType& Obj);								//�R�s�[�R���X�g���N�^
	virtual ~TDiType();									//�f�X�g���N�^
	virtual TDiType& operator=(const TDiType& Obj);		//"="���Z�q�̃I�[�o�[���[�h
	virtual TDiType operator+(const TDiType& Obj);		//"+"���Z�q�̃I�[�o�[���[�h
	virtual TDiType& operator+=(const TDiType& Obj);	//"+="���Z�q�̃I�[�o�[���[�h
	virtual TDiType operator-(const TDiType& Obj);		//"-"���Z�q�̃I�[�o�[���[�h
	virtual TDiType& operator-=(const TDiType& Obj);	//"-="���Z�q�̃I�[�o�[���[�h
	virtual TDiType operator*(const TDiType& Obj);		//"*"���Z�q�̃I�[�o�[���[�h
	virtual TDiType& operator*=(const TDiType& Obj);	//"*="���Z�q�̃I�[�o�[���[�h
	virtual TDiType operator/(const TDiType& Obj);		//"/"���Z�q�̃I�[�o�[���[�h
	virtual TDiType& operator/=(const TDiType& Obj);	//"/="���Z�q�̃I�[�o�[���[�h
	virtual TDiType operator%(const TDiType& Obj);		//"%"���Z�q�̃I�[�o�[���[�h
	virtual TDiType& operator%=(const TDiType& Obj);	//"%="���Z�q�̃I�[�o�[���[�h
};	//�^�e���v���[�g



/////
//���R���X�g���N�^
//�����F�Ȃ�
//�߂�l�F�Ȃ�
//�T�v�F�������ɍs������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType>::TDiType()
	:TDiType((DiType)0, (DiType)0)	//�Ϗ�
{
}

/////
//���R���X�g���N�^
//�����P�FDiType x
//�����Q�FDiType y
//�߂�l�F�Ȃ�
//�T�v�F�������ɍs������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType>::TDiType(DiType x, DiType y)
{
	//��������
	this->x = x;	//�P�ߏ�����
	this->y = y;	//�Q�ߏ�����
}

/////
//���R�s�[�R���X�g���N�^
//�����FTDiType & Obj�F��������f�[�^��
//�߂�l�F�Ȃ�
//�T�v�F�R�s�[���ɍs������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType>::TDiType(TDiType & Obj)
{
	//������
	this->x = Obj.x;	//�P�߂̃f�[�^�R�s�[
	this->y = Obj.y;	//�Q�߂̃f�[�^�R�s�[
}

/////
//���f�X�g���N�^
//�����F�Ȃ�
//�߂�l�F�Ȃ�
//�T�v�F�j�����ɍs������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType>::~TDiType()
{
}

/////
//��������Z�q
//�����Fconst TDiType & Obj�F�������l�̎Q��
//�߂�l�F������s��ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɑ���������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType>& TDiType<DiType>::operator=(const TDiType & Obj)
{
	//������
	this->x = Obj.x;	//�P�߂̃f�[�^�R�s�[
	this->y = Obj.y;	//�Q�߂̃f�[�^�R�s�[

	//����
	return	*this;	//���g�̎Q��
}

/////
//�����Z���Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���g�ƈ����̉��Z����
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɉ��Z�������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> TDiType<DiType>::operator+(const TDiType & Obj)
{
	//����
	return { this->x + Obj.x, this->y + Obj.y };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɉ��Z�������s�������̂�������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> & TDiType<DiType>::operator+=(const TDiType & Obj)
{
	//����
	return (*this = *this + Obj);	//�Q�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//�����Z���Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���g - �����̌���
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��Ɍ��Z�������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> TDiType<DiType>::operator-(const TDiType & Obj)
{
	//����
	return { this->x - Obj.x, this->y - Obj.y };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��Ɍ��Z�������s�������̂�������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> & TDiType<DiType>::operator-=(const TDiType & Obj)
{
	//����
	return (*this = *this - Obj);	//�Q�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//����Z���Z�q
//�����Fconst TDiType & Obj�F��Z����l�̎Q��
//�߂�l�F���g�ƈ����̏�Z����
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�Z�������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> TDiType<DiType>::operator*(const TDiType & Obj)
{
	//����
	return { this->x * Obj.x, this->y * Obj.y };	//��Z����
}

/////
//����Z������Z�q
//�����Fconst TDiType & Obj�F��Z����l�̎Q��
//�߂�l�F��������Z���ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�Z�������s�������̂�������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> & TDiType<DiType>::operator*=(const TDiType & Obj)
{
	//����
	return (*this = *this * Obj);	//�Q�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//�����Z���Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���g / �����̌���
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ��Z�������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> TDiType<DiType>::operator/(const TDiType & Obj)
{
	//����
	return { this->x / Obj.x, this->y / Obj.y };	//���Z����
}

/////
//�����Z������Z�q
//�����Fconst TDiType & Obj�F���Z����l�̎Q��
//�߂�l�F���������Z���ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ��Z�������s�������̂�������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> & TDiType<DiType>::operator/=(const TDiType & Obj)
{
	//����
	return (*this = *this / Obj);	//�Q�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

/////
//����]���Z���Z�q
//�����Fconst TDiType & Obj�F��]���Z����l�̎Q��
//�߂�l�F���g�ƈ����̏�]���Z����
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�]���Z�������s��
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> TDiType<DiType>::operator%(const TDiType & Obj)
{
	//����
	return { this->x % Obj.x, this->y % Obj.y };	//��]���Z����
}

/////
//����]���Z������Z�q
//�����Fconst TDiType & Obj�F��]���Z����l�̎Q��
//�߂�l�F��������]���Z���ꂽ�������g
//�T�v�F�Ɨ������Q�̃����o�[�ϐ��ɑ΂��Ă��ꂼ��ɏ�]���Z�������s�������̂�������
/////
template<class DiType>	//�e���v���[�g�֐�����
TDiType<DiType> & TDiType<DiType>::operator%=(const TDiType & Obj)
{
	//����
	return (*this = *this % Obj);	//�Q�̎����ω��Z�q���g�p���ď������s���A���g�̎Q�Ƃ�Ԃ�
}

#endif // !___DI_TYPE_H___



//--- �������牺�͎��^�](cpp�ɂ����Ȃ��Ɠ����Ȃ��̂ŁA���������ꍇ���̃w�b�_��all�R�s�[����cpp�ɓ\��t���Ă�������) ---//
	//�I�F ������main�֐�������ꍇ�͕ʃv���W�F�N�g�Ŏ������A�ꎞ�I�ɃR�����g�A�E�g���Ă��������B
//#include <iostream>
//#include <string>
//
//int main()
//{
//	TDiType<int> a;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//0,0�̃n�Y
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
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//3,3�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4�̃n�Y
//
//	a = b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//4,4�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4�̃n�Y
//
//	a += b;
//	std::cout << std::to_string(a.x) << "," << std::to_string(a.y) << std::endl;	//8,8�̃n�Y
//	std::cout << std::to_string(b.x) << "," << std::to_string(b.y) << std::endl;	//4,4�̃n�Y
//	std::cin.get();
//
//
//	return 0;
//}