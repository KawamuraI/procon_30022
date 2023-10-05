#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<vector>

#define DIRECTION_MAX 8
#define MAP_MAX 256

int direction[8][2] = { {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1} };

using namespace std;

typedef struct NODE {
	int x, y;
	int scoreC;
	int scoreH;
	node* parent;
}node;

int getDistance(node* n1, node* n2) {
	if (abs(n1->x - n2->x) > abs(n1->y - n2->y))
		return abs(n1->x - n2->x);
	else
		return abs(n1->y - n2->y);
}

vector<node*> a_str(node n,int nodeMax) {
	vector<node*> route;
	vector<node*> serched;

	for(int i=0;i<nodeMax;i++)



	return route;
}

vector<node*> serchPair(vector<node*> player, vector<node*> catsle, int playerNum , int castleNum) 
{
	vector<int> pair;
	vector<int> distance;

	int num;
	if (playerNum > castleNum)
		num = playerNum;
	else
		num = castleNum;


	for (int i = 0; i < playerNum; i++) {
		for (int j = 0; j < castleNum; i++)
			distance.push_back(getDistance(player[i], catsle[j]));
		pair.push_back(-1);
	}

	for (int i = 0; i < castleNum; i++)
		pair[i] = i;

	int start = 0;
	int flag = 0;
	while (1) {
		for (int i = start; i < playerNum; i++) {
			if (i > start)
				start = i;
			for (int j = i + 1; j < num; j++) {
				if (num > )
			}
		}

	}

}

int main() {
	node* n;
	int map[256][256] = {
	};
	int map_x=0;
	int map_y=0;
	return 0;
}
