/*
��蕶
snuke �N�͎��]�Ԃ𔃂��ɗ��܂����B snuke �N�͂��łɔ������]�Ԃ����߂��̂ł����A���̎��]�Ԃɂ̓x�����t���Ă��Ȃ����߁A ���]�ԂƂ͕ʂɃx���������K�v������܂��B
snuke �N�͈��S�ӎ��������̂ŁA�x�����ǂ���̎�ł��点��悤�A�����̃n���h���� 1 ���� �t���邱�Ƃɂ��܂����B
���X�ɂ���x���� 3 ��ނŁA���ꂼ�� a�~�A b�~�A c�~�ł��B ���� 3 �̂����A�قȂ� 2 �̃x����I��Ŕ����Ƃ��́A�l�i�̍��v�̍ŏ��l�����߂ĉ������B
*/


#include<iostream>
#include<vector>

const int num = 3; //������ς��邾���Ŕėp�����L������͂��@//�����a,b,c��3���@const int num=3;

int main() {
	int min=0;
	std::vector<int> v;
	v.resize(num);

	for (auto&& x : v) {
		std::cin >> x;
	}

	for (int i = 0; i < v.size()-1; i++) { 
		for (int j = i+1; j< v.size(); j++) {
			if (i==0&&j==1) {
				min = v[i] + v[j];    //�����l�̑���I�ȁc�@min>��r�@�̏������Ɓ@min�̏����l��������Ȃ�ǂ��̂ł����A�����������Ȃ��̂ň�ԏ��߂������l�Ƃ����@���Ȃ݂�for���ɓ���܂ł�min=0�ɂ��Ă���̂�for���̒��ň�ʉ���������������
				continue;
			}
			min = min >(v[i] + v[j]) ? v[i] + v[j] : min;
		}
	}

	std::cout << min << std::endl;

	return 0;
}