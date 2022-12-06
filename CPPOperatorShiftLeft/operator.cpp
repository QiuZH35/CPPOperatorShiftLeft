#include <iostream>
using namespace std;
//重载<< 运算符
//<< 运算符只能使用全局重载，不能使用成员函数。
//全局重载  ostream& operator<<(ostream& cout, CGirl& g)  语法：cout<<g
//类成员重载	ostream& operator<<(ostream& cout)  语法：g<<cout (结果乖乖的，显然不是我们需要的结果)

class CGirl
{
	//friend ostream& operator<<(ostream& cout, CGirl& g);
private :
	string m_name;
	int m_xw;
	int m_score;
public :
	//构造初始化
	CGirl()
	{
		m_name = "西施";
		m_xw = 78;
		m_score = 89;
	}
	//自我展示
	void show()
	{
		cout << "姓名：" << m_name << " 胸围: " << m_xw << " 分数：" << m_score << endl;
	
	}

	//成员函数重载
	ostream& operator<<(ostream& cout)  //非成员函数重载
	{

		cout << "姓名：" << this->m_name << " 胸围: " << this->m_xw << " 分数：" << this->m_score << endl;
		return cout;
	}
};

//
//ostream& operator<<(ostream& cout, CGirl& g)  //非成员函数重载
//{
//
//	cout << "姓名：" << g.m_name << " 胸围: " << g.m_xw << " 分数：" << g.m_score << endl;
//	return cout;
//}


int main()
{
	CGirl g;
	g<<cout  << endl;

	return 0;
}