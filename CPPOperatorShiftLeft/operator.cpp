#include <iostream>
using namespace std;
//����<< �����
//<< �����ֻ��ʹ��ȫ�����أ�����ʹ�ó�Ա������
//ȫ������  ostream& operator<<(ostream& cout, CGirl& g)  �﷨��cout<<g
//���Ա����	ostream& operator<<(ostream& cout)  �﷨��g<<cout (����ԹԵģ���Ȼ����������Ҫ�Ľ��)

class CGirl
{
	//friend ostream& operator<<(ostream& cout, CGirl& g);
private :
	string m_name;
	int m_xw;
	int m_score;
public :
	//�����ʼ��
	CGirl()
	{
		m_name = "��ʩ";
		m_xw = 78;
		m_score = 89;
	}
	//����չʾ
	void show()
	{
		cout << "������" << m_name << " ��Χ: " << m_xw << " ������" << m_score << endl;
	
	}

	//��Ա��������
	ostream& operator<<(ostream& cout)  //�ǳ�Ա��������
	{

		cout << "������" << this->m_name << " ��Χ: " << this->m_xw << " ������" << this->m_score << endl;
		return cout;
	}
};

//
//ostream& operator<<(ostream& cout, CGirl& g)  //�ǳ�Ա��������
//{
//
//	cout << "������" << g.m_name << " ��Χ: " << g.m_xw << " ������" << g.m_score << endl;
//	return cout;
//}


int main()
{
	CGirl g;
	g<<cout  << endl;

	return 0;
}