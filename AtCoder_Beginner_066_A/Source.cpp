/*
問題文
snuke 君は自転車を買いに来ました。 snuke 君はすでに買う自転車を決めたのですが、その自転車にはベルが付いていないため、 自転車とは別にベルも買う必要があります。
snuke 君は安全意識が高いので、ベルをどちらの手でも鳴らせるよう、両方のハンドルに 1 つずつ 付けることにしました。
お店にあるベルは 3 種類で、それぞれ a円、 b円、 c円です。 この 3 つのうち、異なる 2 つのベルを選んで買うときの、値段の合計の最小値を求めて下さい。
*/


#include<iostream>
#include<vector>

const int num = 3; //ここを変えるだけで汎用性を広げられるはず　//今回はa,b,cの3個より　const int num=3;

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
				min = v[i] + v[j];    //初期値の代入的な…　min>比較　の条件だと　minの初期値が無限大なら良いのですが、そうもいかないので一番初めを初期値とした　ちなみにfor文に入るまでにmin=0にしているのはfor文の中で一般化したかったから
				continue;
			}
			min = min >(v[i] + v[j]) ? v[i] + v[j] : min;
		}
	}

	std::cout << min << std::endl;

	return 0;
}